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
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        struct ListNode *slow=head;
        struct ListNode *fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;

            }
            if(slow==fast){
                return true;
            }

        }
        return false; 
        
    }
};




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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return false;
        ListNode* temp1=head->next->next;
        ListNode* temp2=head;
        while(temp1!=NULL){
            if(temp1==temp2)return true;
            if(temp1->next==NULL)return false;
            temp1=temp1->next->next;
            temp2=temp2->next;
        }
        return false;
    }
};
