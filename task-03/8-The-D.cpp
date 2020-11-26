#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{ 
    int n,m;
    cin>>n;
    m = n/2;
    int i;
    for(i=0;i<n;i++)
    {
        int j;
        if(i<=m)
        {
            for(j=0;j<m-i;j++)
                cout<<"*";
            for(j=m-i;j<=m+i;j++)
                cout<<"D";
            for(j=m+i+1;j<n;j++)
                cout<<"*";
        }
    
        int k;
        if(i>m)
        {
            k=(n-1)-i;
            for(j=0;j<m-k;j++)
                cout<<"*";
            for(j=m-k;j<=m+k;j++)
                cout<<"D";
            for(j=m+k+1;j<n;j++)
                cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
