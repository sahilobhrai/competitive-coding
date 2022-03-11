#include <bits/stdc++.h>
using namespace std;

 class Node{
   public:
      int data;
      Node* next;
 };
 
 void printList(Node* n){
   while(n!=NULL){
     cout<<n->data<<" ";
     n=n->next;
   }
 }
 
 void push(Node* &head,int val){      //inserting at head
   Node* new_list= new Node();         //inserting at head
   new_list->data=val;                   //inserting at head
   new_list->next=head;                    //inserting at head
   head=new_list;                            //inserting at head
 }

int main() 
{   
    Node* head=NULL;
    Node* two=NULL;
   
    head=new Node();
    two=new Node();
    
    head->data=1;
    head->next=two;
    
    two->data=2;
    two->next=NULL;
    push(head,3);
    printList(head);
    return 0;
}
