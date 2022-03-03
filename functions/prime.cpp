#include <iostream>
using namespace std;

  bool prime(int n){
    for(int i=2;i<n/2;i++)
    {
      if(n%i==0)
      return false;
    }
    return true;
  }


int main() 
{   int a,b;
    cin>>a>>b;
    for(int j=a;j<=b;j++ ){
      if(prime(j))
      cout<<j<<endl;
    }
    return 0;
}
