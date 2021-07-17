#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findhamming(int a,int b)
{
	return __builtin_popcount(a&b);
}
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int hamming=findhamming(a,b);
	cout<<"Hamming distance "<<hamming;
	return 0;
}
