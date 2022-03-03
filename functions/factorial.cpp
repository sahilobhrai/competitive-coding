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
{   int n;
    cin>>n;
    int sum = fact(n);
    cout<<sum;
    return 0;
}
