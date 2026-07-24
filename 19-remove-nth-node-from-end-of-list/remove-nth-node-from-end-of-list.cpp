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
    // ListNode* reverseList(ListNode* head) {
    //     ListNode* prev = nullptr;
    //     ListNode* curr = head;

    //     while (curr != nullptr) {
    //         ListNode* next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }

    //     return prev;
    // }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     if (head == nullptr) {
    //         return head;
    //     }

    //     // 1. Reverse the list
    //     head = reverseList(head);

    //     // 2. Delete nth node from the beginning
    //     if (n == 1) {
    //         head = head->next;
    //     }
    //     else {
    //         ListNode* curr = head;

    //         for (int i = 1; i < n - 1; i++) {
    //             curr = curr->next;
    //         }

    //         curr->next = curr->next->next;
    //     }

    //     // 3. Reverse again
    //     head = reverseList(head);

    //     return head;


        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* fast=head;
        ListNode* curr=head;
        ListNode* slow=curr;
        // slow->next=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast!=nullptr){
            slow=curr;
            curr=curr->next;
            // slow=slow->next;
            fast=fast->next;
        }
        if(head==curr){
            head=head->next;
        }
        slow->next=curr->next;
        return head;
    }
};