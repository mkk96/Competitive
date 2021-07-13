#include<iostream>
using namespace std;
int findmincoin(int *coin,int n,int m)
{
	int table[m+1],i,j;
	table[0]=0;
	for(i=1;i<=m;i++)
	{
		table[i]=INT_MAX;
	}
	for(i=1;i<=m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(coin[j]<=i)
			{
				int x=table[i-coin[j]];
				if(x!=INT_MAX&&x+1<table[i])
				{
					table[i]=x+1;
				}
			}
		}
	}
	
	if(table[m]==INT_MAX)
	{
		return -1;
	}
	return table[m];
}
int main()
{
	int n;
	cout<<"Enter the number of coin\t";
	cin>>n;
	cout<<"Enter coins\n";
	int i,coin[n],m;
	for(i=0;i<n;i++)
	{
		cin>>coin[i];
	}
	cout<<"Enter value\t";
	cin>>m;
	int mincoin=findmincoin(coin,n,m);
	cout<<mincoin;
	return 0;
}
