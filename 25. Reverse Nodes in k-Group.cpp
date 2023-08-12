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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        int length=getlength(head);
        while(k>length){
            return head;
        }
        int cnt=0;
        struct ListNode*pre=NULL;
        struct ListNode*curr=head;
        struct ListNode*forw=curr->next;
        while(cnt<k){
            forw=curr->next;
            curr->next=pre;
            pre=curr;
            curr=forw;
            cnt++;
        }
        if(forw!=NULL){
            head->next=reverseKGroup(forw,k);

        }
        return pre;
    }

    int getlength(struct ListNode *head){
        int len=0;
        struct ListNode *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
};
