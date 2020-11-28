#include <cmath>
#include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    int evnsum[t]={0};
    
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int a=0; int b=1; int sum=0;
        cin >> n;
        
        while(sum<=n)
        {
            if (sum%2==0)
                evnsum[a0]+=sum;
            
            a=b;
            b=sum;
            sum=a+b;
        }
        
        
    }
    
    for(int a0=0;a0<t;a0++)
    {
        cout<<evnsum[a0]<<endl;
    }
    return 0;
}
