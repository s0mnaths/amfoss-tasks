#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    int arr[t];
    
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
    
        int sum = 0; 
        for (int i=1; i<n; i++) 
        {
            if (i%3 == 0) 
                sum+=i;
        
            else if(i%5 == 0)
                sum+=i;
            else sum=sum;
        }
        
        
        arr[a0]=sum;
        
    }
    
    for(int a0=0;a0<t;a0++)
    {
        cout<<arr[a0]<<endl;
    }
    return 0;
}
