#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;
void convertToBinary(int n)
{
	stack<int> s;
	while(n>0)
	{
		s.push(n%2);
		n/=2;
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
int main()
{
	int n;
	cout<<"Enter number\t";
	cin>>n;
	convertToBinary(n);
	return 0;
}
