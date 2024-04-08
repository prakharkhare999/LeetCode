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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>mp;
        ListNode* temp=head;
          ListNode* prev=NULL;
         while(temp){
            if(mp.count(temp->val)==1){
                prev->next=temp->next;
                ListNode *temp2=temp;
                temp=temp->next;
                delete(temp2);


            }else{
            mp[temp->val]++;
            prev=temp;
            temp=temp->next;
            }
            
         }
         return head;
        
    }
};
