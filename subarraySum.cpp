#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findSubarraySum(int *array,int n,int sum)
{
	int i=0,j=0,tempSum=0,k;
	while(i<n||j<n)
	{
		if(tempSum<sum)
		{
			tempSum+=array[j++];
		}
		else if(tempSum>sum)
		{
			tempSum-=array[i-1];
			i++;
		}
		if(tempSum==sum)
		{
			for(k=i-1;k<j;k++)
			{
				cout<<array[k]<<" ";
			}
			break;
		}
		//cout<<tempSum<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the number of array\t";
	cin>>n;
	int array[n],i,sum;
	cout<<"Enter the element\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the sum\t";
	cin>>sum;
	findSubarraySum(array,n,sum);
	return 0;
}
