#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void slidingWindowMinimum(int *array,int n,int window)
{
	int queue[n],rear=0,front=0;
	queue[rear++]=array[0];
	int i=0,j=1,k=1,l;
	while(j<n)
	{
		if(j-i>=window)
		{
			if(array[i]==queue[front])
			{
				i++;
				front++;
			}
			else
			{
				i++;
			}
		}
		if(queue[rear-1]<array[k])
		{
			queue[rear++]=array[k++];
		}
		else if(queue[rear-1]>array[k])
		{
			while(rear>front&&queue[rear-1]>array[k])
			{
				rear--;
			}
			queue[rear++]=array[k++];
		}
		for(l=front;l<rear;l++)
		{
			cout<<queue[l]<<" ";
		}
		cout<<"\n";
		j++;
	}
}
int main()
{
	int n;
	cout<<"Enter number of element\t";
	cin>>n;
	int array[n],i,window;
	cout<<"Enter element\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the window\t";
	cin>>window;
	slidingWindowMinimum(array,n,window);
	return 0;
}
