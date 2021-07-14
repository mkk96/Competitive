#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findmincoin(int *coin,int n,int m)
{
	int table[m+1],i,j,mincoinused[m+1];
	table[0]=0;
	for(i=1;i<=m;i++)
	{
		table[i]=INT_MAX;
	}
	for(i=1;i<=m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i-coin[j]>=0&&(table[i-coin[j]]+1<table[i]))
			{
				table[i]=table[i-coin[j]]+1;
				mincoinused[i]=coin[j];
			}
		}
	}
	j=m;
	while(j>0)
	{
		cout<<mincoinused[j]<<" ";
		j-=mincoinused[j];
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
	cout<<"Enter number of Coin\t";
	cin>>n;
	int coin[n],i,m;
	cout<<"Enter the Coin\n";
	for(i=0;i<n;i++)
	{
		cin>>coin[i];
	}
	cout<<"Enter the value\t";
	cin>>m;
	int mincoin=findmincoin(coin,n,m);
	(mincoin==-1)?cout<<"No combination possible":cout<<mincoin;
	return 0;
}
