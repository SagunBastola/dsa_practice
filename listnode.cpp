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

class Solution
{
public:
    ListNode *insertSorted(ListNode *sortedHead, ListNode *node)
    {
        if (!sortedHead || node->val < sortedHead->val)
        {
            node->next = sortedHead;
            return node;
        }

        ListNode *curr = sortedHead;
        while (curr->next && curr->next->val < node->val)
        {
            curr = curr->next;
        }

        node->next = curr->next;
        curr->next = node;

        return sortedHead;
    }
    ListNode *helper(ListNode *head, ListNode *sortedHead)
    {
        if (!head)
            return sortedHead;

        ListNode *nextNode = head->next;

        head->next = nullptr;

        sortedHead = insertSorted(sortedHead, head);

        return helper(nextNode, sortedHead);
    }

    ListNode *sortList(ListNode *head)
    {
        ListNode *sortedHead = nullptr;

        sortedHead = helper(head, sortedHead);

        return sortedHead;
    }
};
