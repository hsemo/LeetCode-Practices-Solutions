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
        ListNode* init = new ListNode();
        ListNode* sum = init;
        int carry = 0;
        while(l1 || l2 || carry){
            int d1 = 0, d2 = 0;
            if(l1){
                d1 = l1->val;
            }
            if(l2){
                d2 = l2->val;
            }
            int s = d1 + d2 + carry;
            int nxtDigit = s % 10;
            carry = s / 10;
            
            
            sum->next = new ListNode(nxtDigit); // here we are sure that a l1 and l2 both have a next digit
            sum = sum->next;
            
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        
        return init->next;
    }
};
