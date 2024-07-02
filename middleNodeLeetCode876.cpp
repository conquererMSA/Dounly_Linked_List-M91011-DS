class Solution {
public:
    int countSize(ListNode*head){
        int count=0;
        ListNode*head1=head;
        while(head1!=NULL){
            count++;
            head1=head1->next;
        }
        return count;
    };
    ListNode* middleNode(ListNode* head) {
        int sz=countSize(head)/2;
        ListNode*temp=head;
        for(int i=1; i<=sz; i++){
           temp=temp->next;
        }
        return temp;

    }
};