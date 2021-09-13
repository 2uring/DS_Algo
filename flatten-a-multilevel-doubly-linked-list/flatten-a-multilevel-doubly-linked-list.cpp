/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* t = head;
        Node* c;
        Node* t2;
        while(t)
        {
            if(t->child != NULL)
            {
            
            c =  t->child;
            
            c->prev = t;
            t2 = c;
            
            while(t2->next)
                t2 = t2->next;
            
            t2->next = t->next;
            if(t->next)
                t->next->prev = t2;
            
            t->next = c;
            t->child = NULL;
            }
        
            
            t = t->next;    
            
        }
        
        return head;
    }
};