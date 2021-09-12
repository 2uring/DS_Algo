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
    ListNode* oddEvenList(ListNode* head) {
    
        int data ;
        vector <int> odd;
        vector <int> even;
        ListNode* t = head;
        if(head == NULL || head->next == NULL || head ->next->next == NULL)
            return head;
            
        int i = 1;
        while(t)
        {
            if(i%2 == 0)
                even.push_back(t->val);
            else
                odd.push_back(t->val);
            t = t->next;
            i++;
            
        }
        t = head;
        for(int a = 0; a < odd.size(); a++)
        {
            t -> val = odd[a];
            t = t->next;
        }
        for(int a = 0; a < even.size(); a++)
        {
            t -> val = even[a];
            t = t->next;
        }
        return head;
        
    }
};