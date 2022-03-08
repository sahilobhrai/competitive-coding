#include <iostream>
using namespace std;

int main() 
{   int n;
    cin>>n;
    char a[n+1];
      cin>>a;
    int flag=0;
     for(int i=0;i<n;i++){
      if(a[i]!=a[n-1-i])
      flag=1;
      break;
    }
    if(flag==0)
    cout<<"palindrome\n";
    else if(flag==1)
       cout<<" not palindrome\n";
    return 0;
}
