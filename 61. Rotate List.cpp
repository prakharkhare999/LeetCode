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
    int getListSize(ListNode* head) {
        int size = 0;
        ListNode* temp = head;

        while (temp) {
            size++;
            temp = temp->next;
        }
        return size;
    }
    ListNode *findBeforeTailNode(ListNode *head)
    {
        ListNode *temp = head;
    
        while (temp->next->next)
            temp = temp->next;
    
        return temp;
    }
    
    ListNode *rotateRight(ListNode *head, int k)
    {   
        bool isEmptyOrSingle = !head || !head->next;
        if (isEmptyOrSingle) return head;
        
        ListNode *temp = nullptr;
        int loop_index = 0;
        int size = getListSize(head);
        int mod = k % size;
    
        while (loop_index < mod)
        {
            ListNode *beforeTail = findBeforeTailNode(head);
            ListNode *tail = beforeTail->next;
    
            beforeTail->next = nullptr;
            tail->next = head;
            head = tail;
    
            loop_index += 1;
        }
    
        return head;
    }
};
