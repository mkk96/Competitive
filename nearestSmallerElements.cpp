#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nearestSmallerElements(int *array,int n)
{
	int stack[n],top=0,i;
	stack[top++]=array[0];
	for(i=1;i<n;i++)
	{
		if(stack[top-1]<array[i])
		{
			cout<<stack[top-1]<<" Is nearest to "<<array[i]<<"\n";
			stack[top++]=array[i];
		}
		else
		{
			while(1)
			{
				if(stack[top-1]>=array[i])
				{
					top--;
				}
				if(top==-1)
				{
					stack[++top]=array[i];
					top++;
					break;
				}
				if(stack[top-1]<array[i])
				{
					cout<<stack[top-1]<<" Is nearest to "<<array[i]<<"\n";
					stack[top++]=array[i];
					break;
				}
			}
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the number of element\t";
	cin>>n;
	int array[n],i;
	cout<<"Enter element \n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	nearestSmallerElements(array,n);
	return 0;
}
