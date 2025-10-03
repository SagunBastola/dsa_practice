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
        ListNode* slow=head;
        ListNode* fast=head;
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
            fast=fast->next;
        }
        return fast;
    }
};
int main()
{
    return 0;
}
