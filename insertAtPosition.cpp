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
    // insert at position doubly ll er head and tail e insert korte pare na. karon insert korar jonno loop caliye nirdisto position/ index er ager position / index e zete hoy. kintu head e insert er kkhetere loop head theke shuru hoy, ebong insert operation nead er porer pos/index e apply hoy.
    // singly ll e tail e insert kora geleo doubly ll e insert kora zay na. karon loop caliye last node e geleo prev relation maintance er kkhetre last node er porer value NULL ese zay. zehetu NULL er kuno value hoy na tai error dey.
    // Head and Tail node e insertion er kkhetre alada vabe handle korte hoy.
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
int main(){
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
    insertAtPosition(head, pos, val);
    printLLStraight(head);
    printLLRevers(tail);
    return 0;
}