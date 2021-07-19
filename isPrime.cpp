#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool findIsPrime(int n)
{
	for(int i=2;i*i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout<<"Enter number to check for prime\t";
	cin>>n;
	bool isprime=findIsPrime(n);
	if(isprime)
	{
		cout<<"Enter number is prime";
	}
	else
	{
		cout<<"Enter number is not prime";
	}
	return 0;
}
