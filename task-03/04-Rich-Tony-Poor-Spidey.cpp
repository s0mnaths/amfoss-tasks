#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    int sum[t]={0};
    
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int mon[n];
        
        for(int j=0;j<n;j++)
        {
            cin>>mon[j];
        }
        sort(mon, mon + n, greater<int>());
        sum[i]=mon[0]-k;
        
        for(int j=1;j<n;j++)
        {
            sum[i]*=mon[j];
        }
    }
    
    for(int i=0;i<t;i++)
    {
        cout<<sum[i]<<endl;
    }

    return 0;
}