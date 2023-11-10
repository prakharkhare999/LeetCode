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
int binaryToDecimal(vector<int>& v) {
    int decimalNumber = 0;
    int size = v.size();

    for (int i = 0; i < size; ++i) {
        decimalNumber += v[i] * pow(2, size - 1 - i);
    }

    return decimalNumber;
}
    int getDecimalValue(ListNode* head) {
       
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
int result=binaryToDecimal(v);
return result;



    }
};
