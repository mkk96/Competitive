#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int majaority(int *array,int n)
{
	int i,count=1,maj=0;
	for(i=1;i<n;i++)
	{
		if(array[maj]==array[i])
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==0)
		{
			maj=i;
			count=1;
		}
	}
	int candidate=array[maj];
	count=0;
	for(i=0;i<n;i++)
	{
		if(candidate==array[i])
		{
			count++;
		}
	}
	if(count>n/2)
	{
		return array[maj];
	}
	else
	{
		return -1;
	}
}
int main()
{
	int n;
	cout<<"Enter the number of element\t";
	cin>>n;
	int array[n],i;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int majorityElement=majaority(array,n);
	if(majorityElement==-1)
	{
		cout<<"No majaority element";
	}
	else
	{
		cout<<"Majority element\t"<<majorityElement;
	}
	return 0;
}
