#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	int data;
	cin >> data; //有data個matrix
	for(int k=1;k<=data;k++)
	{
		int dim;
		char c1, c2;
		cin >> c1>>c2>>dim;//讀入N=dim
		
		int m[dim][dim];//存matrix
		int f=0;
		int ele;
		for(int i=0;i<dim;i++)
		{
			for(int j=0;j<dim;j++)
			{
				cin >> ele;
				m[i][j]=ele;//由左到右, 上到下讀入數字放入陣列
				if(ele<0)
					f=1;//元素不可為負數
				
			}
		}
		
		for(int i=0;i<dim;i++)
		{
			for(int j=0;j<dim;j++)
			{
				if(m[i][j]!=m[dim-1-i][dim-1-j])//上下左右對稱
					f=1;
				else 
					continue;	
			}
		}
		
		if(f==1)
			printf("Test #%d: Non-symmetric.\n", k);
		else 
			printf("Test #%d: Symmetric.\n", k);
	}
	return 0;
}