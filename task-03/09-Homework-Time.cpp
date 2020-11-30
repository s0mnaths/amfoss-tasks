#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000001
#define MODN 1000000007

long long int f[MAXN];
void precompute()
{
    
    f[1] = 1; f[2] = 2; f[3] = 3;
    
    for(int i = 4;i<MAXN;i++)
    {
        f[i] = (f[i-1] + f[i-2] + f[i-3])%MODN;
    }
}

int reverse(int x)
{
    int rev = 0;
    while(x != 0)
    {
        int ones = x%10;
        rev = (rev*10) + ones;
        x /= 10;
    }
    
    return rev;
}

int main()
{
    precompute();    
    int t, x;
    cin >> t;
    
    for(int i = 0;i<t;i++)
    {
        cin >> x;
        cout << reverse((int)f[x]) << endl;
    }
    
    return 0;
}