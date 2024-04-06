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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int cnt=1;
        ListNode* temp = head; 
        if(left==right)
        {
            return head;
        }
        else
        {
        ListNode* new_prev=NULL; 
        ListNode* new_head=NULL;
        ListNode* new_tail=NULL;
        ListNode* new_next=NULL;
        while(cnt<right+2 && temp!=NULL)
        {
            if(cnt==left-1)
            {
                new_prev = temp;
            }
            if(cnt==left)
            {
                new_tail = temp;
            }
            if(cnt==right)
            {
                new_head = temp;
            }
            if(cnt==right+1)
            {
                new_next = temp;
            }
            temp = temp->next;
            cnt++;
        }
        temp = new_tail; 
        ListNode* next = NULL; 
        ListNode* doubl = NULL;
        while(temp!=new_head)
        {
            if(next==NULL)
            {
                next = temp->next;
            }
            doubl = next->next;
            next ->next = temp;
            temp = next; 
            next = doubl; 
        
        new_tail->next = new_next;
        if(left!=1)
        {
            new_prev->next = new_head;
        }
        else
        {
            head = new_head;
        }
        }
        //cout<<new_tail->val <<" "<<new_head->val;
        return head;
        }
    }
};
