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
    bool isPalindrome(ListNode* head) 
    {
        if(!head->next)
            return true;
        if(!head->next->next)
        {
            if(head->val == head->next->val)
                return true;
            return false;
        }
        
        ListNode* f;
        ListNode* s;
        f = head;
        s = head;
        while(f)
        {
            f = f->next->next;
            s = s->next;
            if(!f)
                break;
            if(!f->next)
                break;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = s;
        ListNode* t;
       
        while(curr)
        {
            t = curr->next;
            curr->next = prev;
            prev = curr;
            curr = t;
        }
        while(prev)
        {
            if(prev->val != head->val)
                return false;
            prev= prev->next;
            head = head->next;
        }
        return true;
        
        
        
    }
};