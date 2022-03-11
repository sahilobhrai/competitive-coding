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
void del(Node* &head,int val){
  Node* temp=head;
    Node* prev=NULL;
    
    if(temp!=NULL && temp->data==val){
      head=temp->next;
      delete temp;
      return;
    }
    else
    while(temp!=NULL && temp->data!=val){
      prev=temp;
      temp=temp->next;
    }
    
   
    if (temp == NULL)
        return;
 
   
    prev->next = temp->next;
 
   
    delete temp;
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
    del(head,1);
    printList(head);
    return 0;
}
