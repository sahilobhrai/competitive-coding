#include <iostream>
using namespace std;

int main() 
{
    int n,sum=0,mx=-9999;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
     for(int i=0;i<n;i++){
       sum+=a[i];
       if(sum<0){
         sum=0;
         
       }
       mx=max(mx,sum);
    }
    
    cout<<mx;
    return 0;
}
