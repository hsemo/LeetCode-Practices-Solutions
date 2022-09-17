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
        int s;
        while(true){
            s = (l1->val + l2->val + carry);
            sum->val = s % 10;
            carry = s / 10;
            
            if(l1->next == nullptr || l2->next == nullptr){
                break;
            }
            sum->next = new ListNode(); // here we are sure that a l1 and l2 both have a next digit
            
            sum = sum->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(l1->next == nullptr && l2->next == nullptr){
            if(carry){
                sum->next = new ListNode(carry);
            }
            return init;
        } else if(l2->next != nullptr){
            delete(l1);
            l1 = l2;
        }
        
        do{
            l1 = l1->next;
            sum->next = new ListNode((l1->val + carry) % 10);
            carry = (l1->val + carry) / 10;
            sum = sum->next;
        }while(l1->next != nullptr);
        
        if(carry){
            sum->next = new ListNode(carry);
        }
        delete(l1);
        return init;
    }
};
