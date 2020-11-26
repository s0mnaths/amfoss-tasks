#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
    
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int counter=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((j!=i) && ((arr[i]+arr[j])==m))
            {
                counter=1;
            }
        }
    }
    
    if(counter==1)
        cout<<"True";
    else
        cout<<"False";
    
    return 0;
}