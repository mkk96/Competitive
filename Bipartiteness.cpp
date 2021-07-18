#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
int findBipartiteness(int s,vector<int> edge[],int n)
{
	queue<int> queue;
	vector<int> color(n,-1);
	queue.push(s);
	color[s]=1;
	while(!queue.empty())
	{
		int x=queue.front();
		queue.pop();
		cout<<x<<" ";
		for(int i=0;i<edge[x].size();i++)
		{
			if(color[edge[x][i]]==-1)
			{
				color[edge[x][i]]=1-color[x];
				queue.push(edge[x][i]);
			}
			else if(color[edge[x][i]]==color[x])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int n,e,i,a,b;
	cout<<"Enter number of Node\t";
	cin>>n;
	cout<<"Enter number of edge\t";
	cin>>e;
	cout<<"Enter edges\n";
	vector<int> edge[n];
	for(i=0;i<e;i++)
	{
		cin>>a;
		cin>>b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	int bipartiteness=findBipartiteness(0,edge,n);
	if(bipartiteness)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
