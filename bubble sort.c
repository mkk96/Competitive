#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,i,j;
	printf("Enter number of element\t");
	scanf("%d",&n);
	int array[n];
	printf("Enter the element in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			
			if(array[j]>array[j+1])
				swap(&array[j],&array[j+1]);
			
		}
	}
	printf("Sorted Array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
}
