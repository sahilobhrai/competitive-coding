#include <iostream>
using namespace std;

int main() 
{   
    int mx=0,n,count=0;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    mx=a[0];
    for(int i=1;i<n;i++){
      if(a[i]>mx && a[i]>a[i+1]){
      mx=a[i];
      count++;
      }

    }
    cout<<count;
    return 0;
}
