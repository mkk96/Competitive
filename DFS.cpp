#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void dfs(int s,vector<int> node[],vector<bool> &visited)
{
	visited[s]=true;			
	int i;
	cout<<s<<" ";
	for (int i=0; i<node[s].size(); i++)
        if (visited[node[s][i]] == false)
            dfs(node[s][i],node,visited);
}
int main()
{
	int n,i,e;
	cout<<"Enter number of node\t";
	cin>>n;
	cout<<"Enter number of edge\t";
	cin>>e;
	vector<int> node[n];
	int a,b;
	for(i=0;i<e;i++)
	{
		cin>>a;
		cin>>b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	vector<bool> visited(n, false);
	dfs(0,node,visited);
	return 0;
}
