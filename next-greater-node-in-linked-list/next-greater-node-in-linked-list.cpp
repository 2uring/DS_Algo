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
    vector<int> nextLargerNodes(ListNode* head) {
        vector <int> answer;
        ListNode* t1 = head;
        ListNode* t2;
        int d1;
        int d2;
        while(t1)
        {
            d1 = t1->val;
            t2 = t1 -> next;
            
            if(t2 == NULL)
                answer.push_back(0);
            else
            {
                while(t2)
                {
                    d2 = t2->val;
                    if(d2>d1)
                    { 
                        answer.push_back(d2);
                        break;
                    }
                    t2 = t2->next;
                }
                if(t2 == NULL)
                    answer.push_back(0); 
            }
            
            t1 = t1->next;
            
            
        }
        return answer;
    }
};