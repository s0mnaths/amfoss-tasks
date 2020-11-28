#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{   
    int t,n, remiander;
    cin>>t;
    int reverse[t]={0};
    
    for(int i=0;i<t;i++)
    {
        cin>>n;
        
        if(n<4)
        {
            reverse[i]=n;
        }
        else
        {
            int f[n];
            f[0]=1; f[1]=2; f[2]=3;
        
            for(int j=3;j<n;j++)
            {
                f[j]=( f[j-1] + f[j-2] + f[j-3] ) ;
            }
        
            while(f[n-1] != 0)
            {
                remiander = f[n-1] % 10;
                reverse[i] = reverse[i] * 10 + remiander;
                f[n-1] = f[n-1] / 10;
            }
        }
    }
    
    for(int i=0;i<t;i++)
    {
        cout<<reverse[i]<<endl;
    }
    
    return 0;
}