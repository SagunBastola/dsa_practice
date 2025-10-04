#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node *prev;

    node(int a) : val(a), next(NULL), prev(NULL)
    {
    }
};

class list
{
private:
    node *head;
    node *tail;

public:
    list()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void push_back(int val)
    {
        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "INVALID POSITION\n";
            return;
        }

        if (pos == 0)
        {
            push_front(val);
            return;
        }

        node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid position\n";
                return;
            }
            temp = temp->next;
        }

        node *newnode = new node(val);
        newnode->next = temp->next;

        if (temp->next)
            temp->next->prev = newnode;
        else
            tail = newnode;

        temp->next = newnode;
        newnode->prev = temp;
    }

    void print_list()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~list()
    {
        node *temp = head;
        while (temp != NULL)
        {
            node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main()
{
    list l;
    l.push_back(4);
    l.push_back(6);
    l.push_front(2);

    cout << "Initial list: ";
    l.print_list();

    l.insert(9, 2);
    cout << "After inserting 9 at position 2: ";
    l.print_list();

    l.insert(10, 4);
    l.push_back(12);
    cout << "After inserting 10 at end and then pushing 12: ";
    l.print_list();

    return 0;
}
