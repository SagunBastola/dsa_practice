#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int d)
    {
        next = NULL;
        val = d;
    }
};
class queue
{
private:
    node *head;
    node *tail;

public:
    queue()
    {
        head = tail = NULL;
    }
    void push(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    int front()
    {
        if (head == NULL)
        {
            cout << "empty";
            return -1;
        }
        else
        {
            return head->val;
        }
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "queue is empty";
            return;
        }
        else
        {
            node* tempnode=head;
            head=head->next;
            delete tempnode;
        }
    }
};
int main()
{
    queue q;
    q.push(3);
    q.push(5);
    q.pop();
    cout<<q.front();
    return 0;
}