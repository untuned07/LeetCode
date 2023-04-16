// Runtime: 42ms    Beats: 43.21%
// Memory: 71.5MB   Beats: 14.2%

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *solution = new ListNode();
        ListNode *temp = solution;
        int carry = 0;
        int sum = 0;
        while(l1 != NULL || l2 != NULL || carry){
            sum = 0;
            if(l1 != NULL){
                sum+= l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode *newListNode = new ListNode(sum%10);
            temp->next = newListNode;
            temp = temp->next;
        }
        return solution->next;
    }
};