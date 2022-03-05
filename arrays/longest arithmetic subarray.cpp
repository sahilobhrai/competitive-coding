#include "bits/stdc++.h"
using namespace std;

int main() 
{   int prev,curr=0,mx=0,n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
     prev= a[1]-a[0];
     curr=2;
     
    for(int j=2;j<n;j++){
      if(a[j]-a[j-1]==prev)
        curr++;
      
      else {
             prev = a[j]-a[j-1];
             curr=2;
      }
      mx = max(mx,curr);
    }
    
    cout<<mx;
    
   
    return 0;
}
