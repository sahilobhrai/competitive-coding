#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() 
{
    string s="abcdefgh";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    
   
    return 0;
}
