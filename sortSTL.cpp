#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of element\t";
	cin>>n;
	int array[n],i;
	cout<<"Enter the Element"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	vector<int> v(array,array+n);
	sort(v.begin(), v.end());
	for(i=0;i<n;i++)
	{
		cout<<v[i]<<"\t";
	}
	return 0;
}
