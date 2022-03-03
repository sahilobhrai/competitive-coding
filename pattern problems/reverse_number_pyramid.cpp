#include <iostream>
using namespace std;

int main(){   
  int row,count;
  cin>>row;
   for(int i=1;i<=row;i++){
     count=1;
     for(int k=row-i;k<row;k++)
       cout<<' ';
     for(int j=i;j<=row;j++){
       cout<<count;
       count++;
       
     }
     cout<<endl;
   }
   return 0;
}