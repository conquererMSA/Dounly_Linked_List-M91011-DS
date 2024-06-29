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
int countDLLsize(Node*head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
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
void deleteFromPosition(Node*head, int pos){
    Node* temp=head;
    for(int i=1; i<=pos-1; i++){
        temp=temp->next;
    }
    Node* deleteNode=temp->next;
    temp->next=deleteNode->next;
    deleteNode->next->prev=temp;
    delete deleteNode;
}
void deleteFromTail(Node*&tail){
    Node* deleteNode=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete deleteNode;
}
void deleteFromHead(Node*&head){
    Node* deleteNode=head;
    head=head->next;
    head->prev=NULL;
    delete deleteNode;
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
    int pos;
    cin>>pos;
    printLLStraight(head);
    printLLRevers(tail);
    cout<<"after deleteion: "<<endl;

    // deleteFromPosition(head,pos);
    // deleteFromTail(tail);
    deleteFromHead(head);
    printLLStraight(head);
    printLLRevers(tail);

    return 0;
}