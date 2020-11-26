#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main()
{
    int t,k,l,i,j,p,q,counter,startpp,startp,endp,finalres;
    finalres=-1;
    counter=0;
    string s;
    cin>>t;
    int sum[t] = {0};
    
    for(i=0;i<t;i++)
    {
        cin>>k;
        cin.ignore();
        getline(cin, s);
        l=s.length();
        
        for(j=0;j<l;j++)
        {
            if (s[j]==' ')
            {
                counter++;
            }
        }
        
        if(counter<k)
        {
            sum[i]=finalres;
        }
        
        
        else
        {
            k=k-1;
            counter=0;
            
            for(p=0;p<l;p++)
            {
                if(s[p]==' ')
                {
                    counter++;
                }
                if(counter==k)
                {
                    startp=(p+2);
                }
                if(counter==(k+1))
                {
                    endp=(p+1);
                }
            }
            
            if(counter>k)
            {
                for(q=startp;q<endp;q++)
                {
                   
                    sum[i]+=s[q];
                }
            }
            
            else
            {
                for(q=startp;q++;)
                {
                    sum[i]+=s[q];
                }
            }
        }
    
    }
    
    for(i=0;i<t;i++)
    {
        if(sum[i]==finalres)
        {
            cout<<"-1"<<endl;
        }
        else
        {cout<<sum[i]<<endl;}
    }
    
    return 0;
}
