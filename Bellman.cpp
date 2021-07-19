#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void bellmanFind(int s,vector<int> &src,vector<int> &dest,vector<int> &weight,int n,int e)
{
	vector<int> dist(n,INT_MAX);
	int i,j,flag=0;
	dist[0]=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<e;j++)
		{
			int u=src[j];
			int v=dest[j];
			if(dist[u]!=INT_MAX&&dist[u]+weight[j]<dist[v])
			{
				dist[v]=dist[u]+weight[j];
			}
			
		}
	}
	for(j=0;j<e;j++)
	{
		int u=src[j];
		int v=dest[j];
		if(dist[u]!=INT_MAX&&dist[u]+weight[j]<dist[v])
		{
			dist[v]=dist[u]+weight[j];
			flag=1;
		}
		
	}
	if(flag)
	{
		cout<<"Negative cycle present\t";
	}
	else
	{
		for(i=1;i<n;i++)
		{
			cout<<i<<" Distance from source "<<dist[i]<<"\n";
		}
	}
}
int main()
{
	int n,e,i,a,b,w;
	cout<<"Enter number of Node\t";
	cin>>n;
	cout<<"Enter number of edge\t";
	cin>>e;
	cout<<"Enter edge\n";
	vector<int> src;
	vector<int> dest;
	vector<int> weight;
	for(i=0;i<e;i++)
	{
		cin>>a;
		cin>>b;
		cin>>w;
		weight.push_back(w);
		src.push_back(a);
		dest.push_back(b);
	}
	bellmanFind(0,src,dest,weight,n,e);
	return 0;
}
