//2807. Insert Greatest Common Divisors in Linked List
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp->next!=NULL){
            int gcd=__gcd(temp->val, temp->next->val);
            ListNode* newNode=new ListNode(gcd);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=newNode->next;
        }
        return head;
    }
};