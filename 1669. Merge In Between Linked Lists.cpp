//1669. Merge In Between Linked Lists
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* list1Start=list1;
        for(int i=1; i<a; i++){
            list1Start=list1Start->next;
        }
        ListNode* list1End=list1;
        for(int j=0; j<=b; j++){
            list1End=list1End->next;
        }
        cout<<list1End->val;
        ListNode* list2Last=list2;
        while(list2Last->next!=NULL){
            list2Last=list2Last->next;
        }
        list1Start->next=list2;
        list2Last->next=list1End;
        return list1;
    }
};