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

 void mid(Node* &prev,int val){      //inserting at middle
   Node* new_list= new Node();         //inserting at middle
   new_list->data=val;                   //inserting at middle
   new_list->next=prev->next;                    //inserting at middle
   prev->next=new_list;                            //inserting at middle
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
    end(head,5);
    mid(head->next,7);
    printList(head);
    return 0;
}
