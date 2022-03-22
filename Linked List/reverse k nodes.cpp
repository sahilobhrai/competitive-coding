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
   cout<<endl;
 }
 


void end(Node* &head,int val){      //inserting at end
   Node* new_list= new Node();       //inserting at end
    new_list->data=val;              //inserting at end
   if(head==NULL){                     //inserting at end
     head=new_list;                      //inserting at end
     return;                             //inserting at end
   }                                     //inserting at end
   Node* temp=head;                        //inserting at end
   while(temp->next!=NULL){                //inserting at end
     temp=temp->next;                        //inserting at end
   }                                           //inserting at end
    temp->next=new_list;                       //inserting at end
 }

Node* revk(Node* &head, int k){
  Node* curr=head;
  Node* prev=NULL;
  Node* nextp;
  int count=0;
  while(curr!=NULL && count<k){
    nextp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextp;
    count++;
  }
  
  if(nextp!=NULL){
      head->next = revk(nextp,k);
  }
  return prev;
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
    end(head,5);
    end(head,6);
  
    printList(head);
    int k=2;
    Node* newhead=revk(head,k);
    printList(newhead);
    return 0;
}
