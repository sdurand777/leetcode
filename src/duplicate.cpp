#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <map>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode() : val(0), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;
        ListNode* p = head;
        while (p->next != NULL) {
            if (p->val == p->next->val) {
                p->next = p->next->next;
            } else {
                p = p->next;
            }
        }
        return head;
        
    }
};