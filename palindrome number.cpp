class Solution {
public:
   
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
            
        int g=x;
        long pnum=0;
        int y=0;
            while(x!=0){
                 y=x%10;
                pnum=pnum*10+y;
                x=x/10;
            }  
        
        return g==pnum;
    } 
};
