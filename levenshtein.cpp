#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int cost(char a,char b)
{
	if(a==b)
	{
		return 0;
	}
	return 1;
}
int minimum(int x,int y,int z)
{
	if(x<=y&&x<=z)
		return x;
	if(y<=z&&y<=x)
		return y;
	if(z<=y&&z<=x)
		return z;
}
int levenshtein(char *a,char *b)
{
	int n=strlen(a);
	int m=strlen(b);
	int array[n+1][m+1],i,j;
	for(i=0;i<=m;i++)
	{
		array[0][i]=i;
	}
	for(i=0;i<=n;i++)
	{
		array[i][0]=i;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			array[i][j]=minimum(array[i][j-1]+1,array[i-1][j]+1,array[i-1][j-1]+cost(a[i-1],b[j-1]));
		}
	}
	/*for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	return array[n][m];
}
int main()
{
	char a[10],b[10];
	cin>>a;
	cin>>b;
	int distance=levenshtein(a,b);
	cout<<distance;
	return 0;
}
