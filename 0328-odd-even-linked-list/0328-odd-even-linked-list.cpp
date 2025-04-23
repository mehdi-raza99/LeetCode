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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* evenHead= head->next;
        ListNode* currentEven=evenHead;
        ListNode* currentOdd=head;
        while(currentEven && currentEven->next){
            currentOdd->next=currentOdd->next->next;
            currentEven->next=currentEven->next->next;
            currentEven=currentEven->next;
            currentOdd=currentOdd->next;
        }
        currentOdd->next=evenHead;
        return head;
    }
};