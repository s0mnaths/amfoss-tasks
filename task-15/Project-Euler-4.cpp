#include <iostream> 
using namespace std; 
  
bool isPalindrome(int n) 
{ 
    int temp = n; 
    int reverse = 0; 
     
    while(temp>0) 
    { 
        reverse = 10*reverse + temp%10; 
        temp /= 10; 
    } 
     
    if(reverse == n)
        return true; 
    else
        return false; 
} 
  
int main()
{
    int t;
    cin >> t;
    int largest[t]={0};
    
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        
        for(int i=100;i<1000;i++)
        {   
            for(int j=100;j<1000;j++)
            {
                if(isPalindrome(i*j) && n>(i*j))
                    if(largest[a0]<(i*j))
                        largest[a0]=i*j;
            }
        }
    }
    
    for(int a0=0;a0<t;a0++)
    {
        cout<<largest[a0]<<endl;
    }
    
    return 0;
}