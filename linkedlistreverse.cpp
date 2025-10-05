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
using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* prev=NULL;
        ListNode* first=head;
        ListNode* sec=head->next;
        ListNode* third=NULL;
        while(first!=NULL && sec!= NULL)
        {
            third=sec->next;
            sec->next=first;
            first->next=third;
            if(prev == NULL)
            {
                head=sec;
            }
            else
            {
                prev->next=sec;
            }
            prev=first;
            if(third== NULL || third->next==NULL)
            {
                first=third;
                break;
            }
            first=third;
            sec=third->next;

        }
        return head;
    }
};
int main()
{
    return 0;
}