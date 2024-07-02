class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* f=head;
        ListNode* s=head;
        while(f!=NULL && f->next!=NULL){
          s=s->next;
          f=f->next->next;
          if(f==s){
            return true;
          }
        }
        return false;
    }
};