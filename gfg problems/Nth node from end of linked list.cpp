int getNthFromLast(struct Node *head, int n)
{
    struct Node *temp= head;
    struct Node *curr=head;
    while(curr){
        if(n){
            curr=curr->next;
            n--;
        }
        else{
            curr=curr->next;
            temp=temp->next;
        }
        
    }if(n!=0) return -1;
        return temp->data;
   
    
}
