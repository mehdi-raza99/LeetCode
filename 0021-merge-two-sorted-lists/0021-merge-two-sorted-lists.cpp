/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 || !list2)
            return !list1 ? list2 : list1;
        ListNode* newHead;
        if(list1->val < list2 -> val){
            newHead=list1;
            list1=list1->next;
        }
        else{
            newHead=list2;
            list2=list2->next;
        }
        ListNode* current=newHead;
        while(list1 && list2){
            ListNode* temp;
            if(list1->val < list2 -> val){
                temp=list1;
                list1=list1->next;
            }
            else{
                temp=list2;
                list2=list2->next;
            }
            current->next=temp;
            current=current->next;
        }
        if(list1)
            current->next=list1;
        else
            current->next=list2;
        return newHead;
    }
};