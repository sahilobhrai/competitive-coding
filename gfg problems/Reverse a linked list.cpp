struct Node* reverseList(struct Node *head)
    {
        struct Node *prev=NULL;
        struct Node *curr=head;
        struct Node *nextp;
        while(curr){
            nextp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextp;
        }
        head=prev;
    }
