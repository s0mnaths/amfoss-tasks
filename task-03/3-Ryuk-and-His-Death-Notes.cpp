#include <bits/stdc++.h> 
#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    int ireq[t], iavail[t], idiv[t];
    
    for(int i=0;i<t;i++)
    {
        cin>>ireq[i];
    }
    cin.ignore();
    
    for(int i=0;i<t;i++)
    {
        cin>>iavail[i];
    }
    cin.ignore();
    
    for(int i=0;i<t;i++)
    {
        idiv[i]=iavail[i]/ireq[i];
    }
    
    int least = idiv[0];
    for(int i=0; i<t; i++)
    {
        if(least>idiv[i]) 
        {
            least=idiv[i];
        }
   }
    
    cout<<least;
    
    return 0;
}