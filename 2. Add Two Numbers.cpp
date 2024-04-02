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
    
        ListNode* result = new ListNode(0);
        ListNode* ptr = result;

        int carry = 0;    // Set default carry

        while (l1 != NULL || l2 != NULL) {

            int sum = 0 + carry;    // Initialize sum

            if (l1 != NULL) {    // Use number from first list
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL) {    // Use number from 2nd list
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;    // Get sum and carry
            sum = sum % 10;
            ptr->next = new ListNode(sum);
            ptr = ptr->next;
        }

        if (carry == 1) ptr->next = new ListNode(1);

        return result->next;
 
    }
};
