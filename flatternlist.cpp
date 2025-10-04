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
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
};

class Solution
{
public:
    Node* flatten(Node* head)
    {
        if (!head) return nullptr;

        Node* curr = head;

        while (curr != nullptr)
        {
            if (curr->child != nullptr)
            {
                Node* nextptr = curr->next;
                
                Node* childHead = flatten(curr->child);
                curr->next = childHead;
                childHead->prev = curr;
                curr->child = nullptr;

                Node* tail = childHead;
                while (tail->next != nullptr)
                    tail = tail->next;

                if (nextptr != nullptr)
                {
                    tail->next = nextptr;
                    nextptr->prev = tail;
                }
            }
            curr = curr->next;
        }

        return head;
    }
};
