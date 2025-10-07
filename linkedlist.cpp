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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
        {
            return NULL;
        }
        int count = 0;
        ListNode *temp1 = head;
        while (temp1->next != NULL)
        {
            count += 1;
            temp1 = temp1->next;
        }
        if (count > n)
        {
            return NULL;
        }
        ListNode *temp = head;
        int nth = count - n;
        count = 0;
        while (count != (nth - 1))
        {
            temp = temp->next;

            count += 1;
        }

        if (count == (nth - 1))
        {
            ListNode *prev = temp;
            ListNode *curr = temp->next;

            ListNode *next = curr->next;
            curr->next = NULL;
            prev->next = next;
            delete curr;
        }
        return head;
    }
};
int main()
{
    return 0;
}