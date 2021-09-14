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
    ListNode* rotateRight(ListNode* head, int k) {
        int l = 0;
        ListNode* t;
        t = head;
        while(t)
        {
            l++;
            t = t->next;
        }
        if(l==0)
            return head;
        t = head;
        ListNode* t2;
        ListNode* t3;
        
        t2 = head;
        if(l)
            k = k%l;
        for(int i = 1; i < (l-k); i++)
        {
            t2 = t2->next;
            
        }
        
        
        
        while(t2->next)
        {
            t3 = t2;
            while(t3->next->next)
              t3 = t3->next;
            
            t3->next->next = head;
            head = t3->next;
            t3->next = NULL;
            
        }
        
        return head;
    }
};