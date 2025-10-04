#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int v) : val(v), next(NULL)
    {
    }
};
class circular
{
private:
    node *head;
    node *tail;

public:
    circular() : head(NULL), tail(NULL)
    {
    }
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            tail->next = newnode;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }
    void print_list()
    {
        if (!head)
            return;
        node *temp = head;
        do
        {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);
        cout<<temp->val;
        cout << endl;
    }
    void pop_front()
    {
        if (head == NULL)
        {
            return;
        }
        else if (head == head->next)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            return;
        }
        else if (head == head->next)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp = head;
            node *t1 = tail;

            while (temp->next->next != head)
            {
                temp = temp->next;
            }
            tail = temp;
            temp->next = head;
            t1->next = NULL;
            delete t1;
        }
    }
};
int main()
{
    circular l;
    l.push_back(4);
    l.push_back(6);
    l.push_front(2);

    cout << "Initial list: ";
    l.print_list();
    cout << "After inserting 9 at position 2: ";
    l.print_list();

    l.push_back(12);
    l.print_list();

    return 0;
}
