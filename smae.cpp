#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution
{
    public:
    Node* detectCycle(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        do{
            slow=slow->next;
            fast=fast->next->next;
        }while(slow != fast && fast != NULL && fast->next != NULL);
        if(fast == NULL || fast->next != NULL)
        {
            return NULL;
        }
        slow=head;
        while(slow != fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};