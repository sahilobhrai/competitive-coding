#include <iostream>
using namespace std;

int main() 
{
    int n,sum,max=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
     for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
          sum=0;
         for(int k=i;k<=j;k++){
          sum+=a[k];
          if(sum>max)
          max=sum;
        }
        
      }
      
    }
    cout<<max;
    return 0;
}
