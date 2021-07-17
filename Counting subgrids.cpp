#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countingSubgrids(int** color, int n)
{
    int subgrids = 0;
    for(int a=0; a<n; ++a)
        for(int b=a+1; b<n; ++b) {    // loop over pairs (a,b) of rows 
            int count=0;
            for(int i=0; i<n; ++i) {  // loop over all columns
                if(color[a][i]==1 && color[b][i]==1)
                    ++count;
            }
            subgrids += ((count-1)*count)/2;
        }
    return subgrids;
}
int main()
{
	int n;
	cin>>n;
	int color[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>color[i][j];
		}
	}
	int count=countingSubgrids(color,n);
	cout<<"Subgrid \t"<<count;
	return 0;
}
