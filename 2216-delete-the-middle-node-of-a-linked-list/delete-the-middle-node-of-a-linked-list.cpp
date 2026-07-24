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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        ListNode* fast=head;
        ListNode* curr=head;
        ListNode* slow=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=curr;
            curr=curr->next;
            fast=fast->next->next;
        }
        slow->next=curr->next;
        return head;

    }
};