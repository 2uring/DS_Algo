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
        set<ListNode*> cs;
        if(!head)
            return false;
        if(!head->next)
            return false;
        ListNode *ptr = head;
        
        while(ptr)
        {
            if(cs.find(ptr) == cs.end())
                cs.insert(ptr);
            else
            return true;
            ptr = ptr->next;
        }
        return false;
    }
};