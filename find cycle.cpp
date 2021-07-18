#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findcycle(int s,vector<int> edge[],vector<bool> &visited,int parent)
{
	visited[s]=true;
	for(int i=0;i<edge[s].size();i++)
	{
		if(visited[edge[s][i]]==false)
		{
			return findcycle(edge[s][i],edge,visited,s);
		}
		else if(edge[s][i]!=parent)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n,e,i,a,b;
	cout<<"Enter number of node\t";
	cin>>n;
	cout<<"Enter number of edge\t";
	cin>>e;
	cout<<"Enter edge\n";
	vector<int> edge[n];
	for(i=0;i<e;i++)
	{
		cin>>a;
		cin>>b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	vector<bool> visited(n,false);
	int cycle=findcycle(0,edge,visited,0);
	if(cycle)
	{
		cout<<"Graph contain cycle";
	}
	else
	{
		cout<<"Graph not contain cycle";
	}
	return 0;
}
