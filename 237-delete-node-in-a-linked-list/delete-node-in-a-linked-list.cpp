/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        // ListNode* temp = head;
        // ListNode* prev = head;
        // temp=temp->next;
        // while(temp->next != node){
        //     temp=temp->next;
        //     prev=prev->next;
        // }
        // prev->next = temp->next;
        // return head;


        node->val=node->next->val;
        node->next=node->next->next;


    }
};