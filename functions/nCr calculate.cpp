#include <iostream>
using namespace std;
  int fact(int n){
    int ans=1;
    for(int i=n;i>1;i--){
      ans=i*ans;
    }
    return ans;
  }

int main() 
{   int n,r;
    cin>>n>>r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr= nfact/(nrfact * rfact);
    cout<<ncr;
    return 0;
}
