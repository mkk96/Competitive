#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int array[]={2,5,6,8};
	set<int> s(array,array+4);
	set<int>::iterator it = s.begin();
	cout << *it << "\n";
   return 0;
}

