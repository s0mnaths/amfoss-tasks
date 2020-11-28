#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
    
    int t;
    cin>>t;
    int ans[t]={0};
    for(int i=0;i<t;i++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int sum=0;
        int present[m], maxcap[m];
        for(int j=0;j<m;j++)
        {
            cin>>present[j];
        }
        for(int j=0;j<m;j++)
        {
            cin>>maxcap[j];
        }
        sort(maxcap, maxcap + m, greater<int>());
        
        for(int j=0; j<k;j++)
        {
            sum+=maxcap[j];
        }
        
        if(sum>=n)
        {
            ans[i]=1;
        }
    }
    
    for(int i=0;i<t;i++)
    {
        if(ans[i]==1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    
    return 0;
}