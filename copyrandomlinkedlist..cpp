#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> m;

        Node* newhead = new Node(head->val);
        m[head] = newhead;

        Node* oldtemp = head->next;
        Node* newtemp = newhead;

        while (oldtemp != NULL) {
            Node* copynode = new Node(oldtemp->val);
            m[oldtemp] = copynode;
            newtemp->next = copynode;
            newtemp = newtemp->next;
            oldtemp = oldtemp->next;
        }

        // Copy random pointers
        oldtemp = head;
        newtemp = newhead;

        while (oldtemp != NULL) {
            newtemp->random = oldtemp->random ? m[oldtemp->random] : NULL;
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        return newhead;
    }
};
int main()
{
    return 0;
}