#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int a) : val(a),next(NULL)
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
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    void print_list()
    {
        node* temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insert(int val,int pos)
    {
        if(pos<0)
        {
            cout<<"INVALID \n"<<endl;
            return;
        }
        if(pos==0)
        {
            push_front(val);
            return;
        }
        node* temp=head;
        for(int i=0;i<pos-1;i++)
        {
            if(temp==NULL)
            {
                cout<<"invalid position \n";
                return;
            }
            temp=temp->next;
        }
        node* newnode=new node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }
};
int main()
{
    list l;
    l.push_back(4);
    l.push_back(6);
    l.push_front(2);
    l.print_list();
    l.insert(9,2);
    l.print_list();
    return 0;
}