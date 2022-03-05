#include <iostream>
using namespace std;

int main() 
{   
    int sum=0,n,find;
    cin>>n;
    cin>>find;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
     
     
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        sum = 0;
        
        for(int s=i;s<=j;s++)
        sum+=a[s];
        
        if (sum==find)
        cout<<i<<" "<<j<<endl;
      }
    }
    return 0;
}
