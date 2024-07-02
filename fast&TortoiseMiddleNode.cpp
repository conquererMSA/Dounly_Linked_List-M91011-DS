class Solution {
public:
//zodi ekta middle node hoy tahole fast and tortois approach use kora zay. ar zodi middle node duita hoy and zodi duitar moddhye protom ta return korte hoy tahole fast and tortoise approach use kora zabe na. kintu zodi ditiota return korte hoy tahole fats and tortoide approach/algorithme use kora zete poare.
    ListNode* middleNode(ListNode* head) {
       ListNode* f=head;
       ListNode* s=head;
       while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
       }
       return s;

    }
};