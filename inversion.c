#include<stdio.h>
int merge(int *array,int left,int mid,int right)
{
	int temp[right-left+1];
	int i=left,j=mid+1,k=0;
	int inverse=0;
	while(i<=mid&&j<=right)
	{
		if(array[i]<=array[j])
		{
			temp[k++]=array[i++];
		}
		else
		{
			temp[k++]=array[j++];
			inverse=inverse+(mid+1-i);
		}
	}
	while(i<=mid)
	{
		temp[k++]=array[i++];
	}
	while(j<=right)
	{
		temp[k++]=array[j++];
	}
	k=0;
	for(i=left;i<=right;i++)
	{
		array[i]=temp[k++];
	}
	return inverse;
}
int mergesort(int *array,int left,int right)
{
	int inverse=0;
	if(left<right)
	{
		int mid=(left+right)/2;
		inverse+=mergesort(array,left,mid);
		inverse+=mergesort(array,mid+1,right);
		inverse+=merge(array,left,mid,right);
	}
	return inverse;
}
int main()
{
	int n;
	printf("Enter number of element\t");
	scanf("%d",&n);
	int array[n],i;
	printf("Enter element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int inverse=mergesort(array,0,n-1);
	printf("Number of inverse\t%d\n",inverse);
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
