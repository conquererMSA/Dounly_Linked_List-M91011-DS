class Solution {
public:
    void reverseRecursion(ListNode* &head, ListNode* curr){
        if(curr->next==NULL){
            head=curr;
            return;
        }
        reverseRecursion(head,curr->next);
        curr->next->next=curr;
        curr->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        reverseRecursion(head,head);
        return head;
        
    }
};