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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==NULL){
            return list2;

        }
        if(list2==NULL){
            return list1;

        }

        if((list1->val)<(list2->val)){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else{
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
        

        
    }
};
//another
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        if(list1==NULL) return list2;
        if(list2==NULL) return list1;

        ListNode* ans =new ListNode(-1);
        ListNode* head = ans;

        while(temp1 && temp2){

            if(temp1->val <= temp2->val){
               
                head->next = temp1;
                head=head->next;
                temp1 =temp1->next;
            }
            else{
                head->next = temp2;
                head=head->next;
                temp2 =temp2->next;
            }     
        }
        while(temp1){
            head->next = temp1;
                head=head->next;
                temp1 =temp1->next;

        } 

        while(temp2){
           head->next = temp2;
                head=head->next;
                temp2 =temp2->next;

        }

        return ans->next;
        
    }
};
