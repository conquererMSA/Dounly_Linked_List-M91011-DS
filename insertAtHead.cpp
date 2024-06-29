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
void insertAtPosition(Node*head, int pos, int v){
    Node* newNode=new Node(v);
    Node* temp=head;
    for(int i=1; i<=pos-1; i++){
        temp=temp->next;
    }
   newNode->next=temp->next;
   temp->next=newNode;
   newNode->next->prev=newNode;
   newNode->prev=temp;
}
void insertAtHead(Node*&head, Node*&tail, int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insertAtTail(Node*&head, Node*&tail, int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        tail=NULL; //head NULL hole tail o NULL korte hoy.
        head=newNode;
        tail=newNode;
        return; // return na korle infinity loop e cole zay.
    }
    tail->next=newNode; //zodi ll empty/NULL hoy tahole kuno node thake na. zehetu kuno node thake na, tahole node er variable next,val and prev thake na. ai line e error dey.
    newNode->prev=tail;
    tail=newNode;
}
int main(){
    // Node*head=NULL;
    // Node*tail=NULL;

    Node* head=new Node(4);
    Node* a=new Node(2);
    Node* b=new Node(1);
    Node* c=new Node(0);
    Node* tail=c;

    // make connection among the nodes.
    // connect the nodes to each other.
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    int pos, val;
    cin>>pos>>val;
    // insertAtPosition(head, pos, val);
    // insertAtHead(head,tail,val);
    insertAtTail(head,tail,val);
    printLLStraight(head);
    printLLRevers(tail);
    return 0;
}