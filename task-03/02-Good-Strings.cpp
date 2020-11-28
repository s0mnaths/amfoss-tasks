#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int n;
    int counter0=0;
    int counter1=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if (s[i] == '1') {
            counter1++;
        } 
        else {
            counter0++;
        }
    }
    if(counter0!=counter1)
    { cout<<"1"; }
    else cout<<"2";
    return 0;
}