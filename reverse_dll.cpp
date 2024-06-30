#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next=NULL;
    Node* prev=NULL;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void printLLStraight(Node*head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printLLRevers(Node*tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void insertAtTail(Node*&head, Node*&tail, int v){
     Node* newNode=new Node(v);
     if(head==NULL){
        tail=NULL;
        head=newNode;
        tail=newNode;
        return;
     }
     tail->next=newNode;
     newNode->prev=tail;
     tail=newNode;
}
void reverseDLL(Node* head,Node* tail){
   Node* i=head;
   Node* j=tail;
   while(i!=j && i->next!=j){
     swap(i->val,j->val);
     i=i->next;
     j=j->prev;
   }
}
int main(){
    Node*head=NULL;
    Node*tail=NULL;
    while(1){
        int v;
        cin>>v;
        if(v==-1) break;
      insertAtTail(head,tail,v);
    }
    printLLStraight(head);
    reverseDLL(head,tail);
    printLLStraight(head);
    return 0;
}