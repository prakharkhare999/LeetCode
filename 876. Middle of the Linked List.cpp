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
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
        return slow;

        
    }
};

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //another way is find the lenth of odd and even
       if(head==NULL){
           return head;
       }
       if(head->next==NULL){
           return head;
       }
       //ll >1 node
      struct ListNode *slow=head;
       struct ListNode *fast=head;
       while(slow!=NULL && fast!=NULL){
           //fast ko 2 step increse krna hai lekin agar iska next null hua to null ka next me error hoga
           //so 
           fast=fast->next;
             if(fast!=NULL){
               fast=fast->next;
               slow=slow->next;
             }
       }
       return slow;

        
    }
};
*/
