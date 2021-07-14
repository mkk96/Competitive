#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findlongest(int *array,int n)
{
	int table[n],i,j;
	for(i=0;i<n;i++)
	{
		table[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(array[j]<array[i])
			{
				table[i]=(table[i]>table[j]+1)?table[i]:table[j]+1;
			}
		}
		cout<<table[i]<<" ";
	}
	return table[n-1];
}
int main()
{
	int n;
	cout<<"Enter number of element in array\t";
	cin>>n;
	int array[n],i;
	cout<<"Enter element\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int longest=findlongest(array,n);
	cout<<longest;
	return 0;
}
