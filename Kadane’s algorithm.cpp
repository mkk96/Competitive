#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
	int best=0,sum=0,i,n;
	printf("Enter number of element in array\t");
	scanf("%d",&n);
	printf("Enter element in array\n");
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=max(array[i],sum+array[i]);
		best=max(best,sum);
	}
	printf("\n%d",best);
}
