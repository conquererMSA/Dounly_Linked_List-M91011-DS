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
int main(){
    Node* head=new Node(4);
    Node* a=new Node(2);
    Node* b=new Node(1);
    Node* tail=b;

    // make connection among the nodes.
    // connect the nodes to each other.
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    printLLStraight(head);
    printLLRevers(tail);
    return 0;
}