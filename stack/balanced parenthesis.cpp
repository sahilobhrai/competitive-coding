#include <iostream>
#include<stack>
using namespace std;


 bool check(string s){
   
      stack<char> st;
      for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
          st.push(s[i]);
        }
        else if(s[i]==')'){
          if(st.top()=='('){
            st.pop();
          }
        }
        
        else if(s[i]=='}'){
          if(st.top()=='{'){
            st.pop();
          }
        }
        
        else if(s[i]==']'){
          if(st.top()=='['){
            st.pop();
          }
        }
        
      }
      if(!st.empty()){
        return false;
      }
      else return true;
 }
int main() 
{
    cout<<check("{([])}");
    return 0;
}
