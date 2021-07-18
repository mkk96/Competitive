#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;
void findconnectivity(int s,vector<int> edge[],vector<bool> &visited)
{
	visited[s]=true;
	//cout<<s<<" ";
	for(int i=0;i<edge[s].size();i++)
	{
		if(visited[edge[s][i]]!=true)
		{
			findconnectivity(edge[s][i],edge,visited);
		}
	}
}
int main()
{
	int n,e,i,a,b;
	cout<<"Enter number of node\t";
	cin>>n;
	cout<<"Enter number of edge\t";
	cin>>e;
	vector<int> edge[n];
	cout<<"Enter edge in pair\n";
	for(i=0;i<e;i++)
	{
		cin>>a;
		cin>>b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	vector<bool> visited(n,false);
	findconnectivity(0,edge,visited);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(visited[i]==false)
		{
			flag=1;
		}
	}
	if(!flag)
	{
		cout<<"Graph is connected";
	}
	else
	{
		cout<<"Graph is not connected";
	}
	return 0;
}
