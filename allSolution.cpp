#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findallsolution(int *coin,int n,int m)
{
	int table[m+1],i,j;
	table[0]=1;
	for(i=1;i<=m;i++)
	{
		table[i]=0;	
	}
	for(i=1;i<=m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i-coin[j]>=0)
			{
				table[i]+=table[i-coin[j]];
			}
		}
		cout<<table[i]<<" ";
	}
	return table[m];
}
int main()
{
	int n;
	cout<<"Enter number of coin\t";
	cin>>n;
	int coin[n],i,m;
	cout<<"Enter coin\n";
	for(i=0;i<n;i++)
	{
		cin>>coin[i];
	}
	cout<<"Enter value\t";
	cin>>m;
	int allsolution=findallsolution(coin,n,m);
	(allsolution==-1)?cout<<"No Solution possible":cout<<"Solution possible is "<<allsolution;
	return 0;
}
