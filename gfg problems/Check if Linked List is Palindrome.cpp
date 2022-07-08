class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL)return false;
        
        int rsum=0,lsum=0,i=1;
        Node *it=head;
        while(it){
            rsum=(it->data)+rsum*10;
            lsum=lsum+(it->data)*i;
            i=i*10;
            it=it->next;
        }//Your code her
        if(rsum==lsum)return true;
        else return false;
    }
};
