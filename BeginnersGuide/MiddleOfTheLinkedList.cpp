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
    ListNode* middleNode(ListNode* head) {
        ListNode* tail;
        tail = head;
        int count = 0;
        while(head != nullptr){
            count++;
            head = head->next;
        }
        // int tra = count/2;
        for(int i=0; i<count/2; i++){
            tail = tail->next;
        }
        return tail;
    }
};