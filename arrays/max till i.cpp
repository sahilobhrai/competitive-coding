#include <iostream>
using namespace std;

int main() 
{
    int n,maxi=-9999999;
   
    cin>>n;
    cout<<n<<endl;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      maxi = max(maxi,a[i]);
      cout<<maxi<<endl;
  }
    
  return 0;
}
