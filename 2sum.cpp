#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find2sum(int *array,int n,int sum)
{
	sort(array,array+n);
	int i=0,j=0,temp=0,flag=0;
	while(i<n||j<n)
	{
		if(temp<sum)
		{
			temp=array[i]+array[++j];
		}
		else if(temp>sum)
		{
			temp=array[++i]+array[j];
		}
		if(temp==sum)
		{
			cout<<array[i]<<" "<<array[j];
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"No Sum found";
	}
}
int main()
{
	int n;
	cout<<"Enter the number of element\t";
	cin>>n;
	int array[n],i,sum;
	cout<<"Enter the element\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the sum\t";
	cin>>sum;
	find2sum(array,n,sum);
	return 0;
}
