#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int a) : val(a)
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
        if (head == NULL)
        {
            node *newnode = new node(val);
            head = tail = newnode;
            return;
        }
        else
        {
            node *newnode = new node(val);
            newnode->next = head;
            head = newnode;
            return;
        }
    }
    void push_back(int val)
    {
        node* newnode=new node(val);
        if(head==NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
            tail->next=NULL;
        }
    }
    void print_list()
    {
        node* temp;
        temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
        delete temp;
    }
};
int main()
{
    list l;
    l.push_back(4);
    l.push_back(6);
    l.push_front(2);
    l.print_list();
    return 0;
}