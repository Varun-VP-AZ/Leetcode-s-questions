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
    bool isPalindrome(ListNode* head) {
        ListNode *now = head;
        ListNode *prev = NULL;
        while(now != NULL){
            ListNode *temp = new ListNode(now->val);
            temp->next = prev;
            prev = temp;
            now = now->next;
        }

        while(head && prev){
            if(head->val != prev->val){
                return false;
            }
            head = head->next;
            prev = prev->next;
        }
        return true;
        
    }
};