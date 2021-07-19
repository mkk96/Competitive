#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int findNumberOfNode(int s,vector<int> edge[],int e,int *count)
{
	count[s]=1;
	for(int i=0;i<edge[s].size();i++)
	{
		if(s==e)
		{
			continue;
		}
		else
		{
			findNumberOfNode(edge[s][i],edge,s,count);
			count[s]+=count[edge[s][i]];
		}
	}
	return count[s];
}
int main()
{
	int n,e,a,b,i;
	cout<<"Enter number of node\t";
	cin>>n;
	cout<<"Enter number of edge\t";
	cin>>e;
	vector<int> edge[n];
	int count[n];
	cout<<"Enter edge\n";
	for(i=0;i<e;i++)
	{
		cin>>a;
		cin>>b;
		edge[a].push_back(b);
	}
	int numberOfNode=findNumberOfNode(0,edge,-1,count);
	cout<<"Number of Node\t"<<numberOfNode;
	return 0;
}
