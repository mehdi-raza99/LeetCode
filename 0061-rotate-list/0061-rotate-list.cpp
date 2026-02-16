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

    int getLength(ListNode* head){
        int len=0;
        while(head){
            len++;
            head=head->next;
        }
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || !head)    return head;
        ListNode* slow=head;
        ListNode* fast=head;

        int length=getLength(head);
        int modK=k%length;
        if(modK == 0)   return head;
        for(int i=0;i<modK;i++){
            fast=fast->next;
        }
        //Moving both slow and fast pointer, so fast will end up at the end of list placed initially and slow just before the start of that list
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* newHead=slow->next;
        slow->next=NULL;
        fast->next=head;

        return newHead;
    }
};