#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>

using namespace std;

// construct a linked list class 
class ListNode {
    public:
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(NULL) {}
};

class Solution {

    public:
        ListNode * sortList(ListNode * list1, ListNode * list2)
        {
            // head
            ListNode * head = new ListNode(0);
            ListNode * res = head;

            if (list1 == NULL)
                return list2;

            if (list2 == NULL)
                return list1;


            while (list1 != NULL && list2 != NULL)
            {
                if(list1->val > list2->val)
                {
                    head->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                else if (list1->val < list2->val)
                {
                    head->next = new ListNode(list1->val);
                    list1 = list1->next;
                }
                else if (list1->val == list2->val)
                {
                    head->next = new ListNode(list1->val);
                    head = head->next;
                    head->next = new ListNode(list1->val);
                    list1 = list1->next;
                    list2 = list2->next;
                }
                head = head->next;
            }

            if (list1 != NULL)
            {
                while (list1 != NULL)
                {
                    head->next = new ListNode(list1->val);
                    list1 = list1->next;
                    head = head->next;
                }    
            } 
            else if (list2 != NULL)
            {
                 while (list2 != NULL)
                {
                    head->next = new ListNode(list2->val);
                    list2 = list2->next;
                    head = head->next;
                }    
            }
        
            return res->next;


        }
};

int main()
{
    // creation de la premiere liste
    ListNode * list1 = new ListNode(-9);
    list1->next = new ListNode(3);
    // list1->next->next = new ListNode(4);
    // list1->next->next->next = new ListNode(12);
    
    // creation de la seconde liste
    ListNode * list2 = new ListNode(5);
    list2->next = new ListNode(7);
    // list2->next->next = new ListNode(5);
    // list2->next->next->next = new ListNode(7);

    // sorted solution
    Solution sol;
    ListNode * merge = sol.sortList(list1, list2);
    ListNode * temp = merge;


    //ListNode * temp = list1;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;


    return 0;
}