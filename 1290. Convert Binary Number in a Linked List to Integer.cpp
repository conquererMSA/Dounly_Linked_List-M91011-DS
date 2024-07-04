//1290. Convert Binary Number in a Linked List to Integer
class Solution {
public:
int getSize(ListNode*head){
    ListNode* temp=head;
            int count=0;
            while(temp!=NULL){
                count++;
                temp=temp->next;
            }
            return count;
        }
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int size=getSize(temp);
        int val=pow(2, size-1);
        int ans=0;
        temp=head;
        while(temp!=NULL){
           if(temp->val==1){ 
            ans+=val;
           };
           val=val/2;
           temp=temp->next;
        }
        return ans;
    }
};