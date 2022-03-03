#include <iostream>
using namespace std;

int main(){   
  int row,col;
  cin>>row>>col;
   for(int i=1;i<=row;i++){
     for(int j=row-i;j<=col;j++){
       cout<<'*';
       
     }
     cout<<endl;
   }
   return 0;
}