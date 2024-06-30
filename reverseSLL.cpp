#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next=NULL;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
void printByRecursion(Node* a){
    if(a==NULL) return;
    cout<<a->value<<" ";
    printByRecursion(a->next);
}
void reverseLLByRecursion(Node*&head, Node* curr){
    if(curr->next==NULL){
        head=curr;
        return;
    }
    reverseLLByRecursion(head, curr->next);
    curr->next->next=curr;
    curr->next=NULL; // normal head. for reverse last node
}
int main(){
    Node* head=new Node(1);
    Node* a=new Node(2);
    Node* b=new Node(3);
    Node* c=new Node(4);
    Node* d=new Node(5);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<"print straitforward: ";
    printByRecursion(head);
    cout<<endl;
    reverseLLByRecursion(head,head);
    cout<<"print reverse: ";
     printByRecursion(head);
    return 0;
}