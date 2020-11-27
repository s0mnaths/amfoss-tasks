#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    int min_mns[t];
    for(int a0=0;a0<t;a0++)
    {
        int n,k;
        cin>>n>>k;
        
        std::vector<int> ndigitarr;
        while (n > 0)
        {
            int digit = n%10;
            n /= 10;
            ndigitarr.push_back(digit);
        }
        std::reverse(ndigitarr.begin(), ndigitarr.end());
        
        int numd= ndigitarr.size();
        
        min_mns[a0]=10000;
        
        if(k>numd-1)
        {
            min_mns[a0]=-1;
        }
        
        else
        {
        int ns[numd-k+1]={0};
        
        for(int i=0;i<numd-k+1;i++)
        {
            for(int j=i;j<(i+k);j++)
            {
                ns[i]+=ndigitarr[j];
            }
        }
        
        int mns[numd-k]={0};
        
        for(int i=0;i<numd-k;i++)
        {
            mns[i]=abs(ns[i]-ns[i+1]);
            if(mns[i]<min_mns[a0])
                min_mns[a0]=mns[i];
        }
        }
    }
    
    for(int a0=0;a0<t;a0++)
    {
        cout<<min_mns[a0]<<endl;
    }
    
    return 0;
}