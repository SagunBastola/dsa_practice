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
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL) return NULL;

        while(curr->next!=NULL)
        {
            //flattern child nodes
            if(curr->child != NULL)
            {
                Node* nextptr=curr->next;
                curr->next=flatten(curr->child)
                curr->next->prev=curr;
                curr->child=NULL;
            }
            //find tail
            while(curr->next!=NULL)
            {
                curr->next;
            }
            if(nextptr!=NULL){
            curr->next=nextptr;
            next->prev=curr;

}        }
    curr=curr->next
    }
    return head;
};