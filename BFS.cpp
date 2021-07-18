#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
void bfs(int s,vector<int> edge[],int n)
{
	vector<bool> visited(n,false);
	queue<int> q;
	int i,j=3;
	q.push(s);
	visited[s]=true;
	while(q.empty()!=true)
	{
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(i=0;i<edge[x].size();i++)
		{
			if(visited[edge[x][i]]!=true)
			{
				q.push(edge[x][i]);
				visited[edge[x][i]]=true;
			}
		}
	}
}
int main()
{
	int n,i,e,a,b;
	cout<<"Enter number of node\t";
	cin>>n;
	cout<<"Enter number of edge\t";
	cin>>e;
	vector<int> edge[n];
	for(i=0;i<e;i++)
	{
		cin>>a;
		cin>>b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	bfs(0,edge,n);
	return 0;
}
