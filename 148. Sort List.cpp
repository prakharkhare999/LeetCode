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


int lengthLL(ListNode* head){
    int cnt=0;
    ListNode* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
    ListNode* sortList(ListNode* head) {
        //self implimented
        vector<int>v;
        ListNode* temp=head; 

     int length=lengthLL(head);


        for(int i=0;i<=length-1;i++){
            v.push_back(temp->val);

        temp=temp->next;
        }
        sort(v.begin(),v.end());

ListNode* temp2=head;
  for(int i=0;i<v.size();i++){
      temp2->val=v[i];
      temp2=temp2->next;


  }
  return head;


        
    }
};
