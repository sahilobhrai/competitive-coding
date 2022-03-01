class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,temp;
        int j=s.size()-1;
        while(i<j){
             temp= s[j];
             s[j]=s[i];
             s[i]=temp;
             i++;
            j--;
        }
            
        
    }
};
