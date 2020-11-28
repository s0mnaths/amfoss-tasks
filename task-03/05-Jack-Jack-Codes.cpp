#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
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
    
    unordered_set<int> s;
    for (int i = 0; i < n; i++) 
    {
        int temp = m - arr[i];
 
        if (s.find(temp) != s.end())
            counter=1;
 
        s.insert(arr[i]);
    }
    
    if(counter==1)
        cout<<"True";
    else
        cout<<"False";
    
    
    return 0;
}