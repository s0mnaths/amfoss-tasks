#include <cmath>
#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    long largest[t]={0};
    
    
    for(int a0 = 0; a0 < t; a0++)
    {
        long n;
        cin >> n;
        
        while (n % 2 == 0)  
        {  
            largest[a0]=2;
            n = n/2;  
        }  
    
        for (int i = 3; i <= sqrt(n); i = i + 2)  
        {  
            while (n % i == 0)  
            {
                if(i>largest[a0])
                    largest[a0]=i;
                n = n/i;  
            }  
        }  
    
        if (n > 2) 
            if(n>largest[a0])
                largest[a0]=n;
        
    }
    
    for(int a0=0;a0<t;a0++)
    {
        cout<<largest[a0]<<endl;
    }
    return 0;
}