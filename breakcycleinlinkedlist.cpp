/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
#include <list>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=head;
        bool isfound=false;
        while(fast != NULL  && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                isfound=true;
                break;
            }
        }
        if(isfound == false)
        {
            return NULL;
        }
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
        return fast;
    }
};
int main()
{
    return 0;
}
