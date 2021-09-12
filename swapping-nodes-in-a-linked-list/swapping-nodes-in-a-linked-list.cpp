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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* t = head;
        if(head-> next == NULL)
            return head;
        
        int data;
        if(head-> next -> next == NULL)
        {
            data = head->val;
            head-> val = head->next->val;
            head->next->val = data;
            return head;
        }
        
        t = head;
        int l = 0;
        while(t)
        {
            l++;
            t = t-> next; 
        }
        
        ListNode* p1;
        ListNode* p2;
        
        p1 = head;
        for(int i = 1; i < k; i++)
        {
          p1 = p1->next;  
        }
        
        p2 = head;
        for(int i = 1; i <= (l-k); i++)
        {
            p2 = p2->next;
        }
        
        data = p1->val;
        p1->val = p2->val;
        p2->val = data;
        
        return head;
    
        
        
        
            
        
        
    }
};