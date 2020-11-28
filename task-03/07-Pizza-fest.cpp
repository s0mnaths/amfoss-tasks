#include <string>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <iostream>

using namespace std;
int main() 
{
    int n,k;
    cin>>n>>k;
    int house[n], order[k], output[k];
    int mark[k]={0};
    
    for(int a0=0;a0<n;a0++)
    {
        cin>>house[a0];
    }
    
    for(int a0=0;a0<n;a0++)
    {
        cin>>order[a0];
    }
    
    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<k;i++)
        {
            if((order[i]==house[j]) && (mark[i]==0))
            {
                output[i]=j+1;
                mark[i]=-1;
                break;
            }
        }
    }
    
    for(int i=0;i<k;i++)
    {
        if(mark[i]==0)
        {
            output[i]=-1;
        }
    }
    
    
    for(int a0=0;a0<k;a0++)
    {
        cout<<output[a0]<<" ";
    }
 
    return 0;
}