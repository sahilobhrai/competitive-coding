#include <iostream>
using namespace std;

int main() 
{   
    int rep,n,flag=0;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=n;i>0;i--){
      for(int j=n-1;j>0;j--){
        if(a[i]==a[j])
        flag=i;
        break;
      }
    }
    cout<<flag+1;
    return 0;
}
