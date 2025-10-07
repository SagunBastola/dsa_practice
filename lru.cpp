#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class LRUCache
{
    class node
    {
    public:
        int val;
        int key;
        node *next;
        node *prev;
        node(int k, int v) : key(k), val(v), next(NULL), prev(NULL) {}
    };
    int limit;
    node *head;
    node *tail;
    unordered_map<int, node *> m;

public:
    LRUCache(int capacity)
    {
        head = new node(-1, -1);
        tail = new node(-1, -1);
        head->next = tail;
        tail->prev = head;
        limit = capacity;
    }
    void delnode(node *oldnode)
    {
        node *oldprev = oldnode->prev;
        node *oldnext = oldnode->next;
        oldprev->next = oldnext;
        oldnext->prev = oldprev;
        delete oldnode;
    }
    void addnode(node *newnode)
    {
        node *oldnext = head->next;
        newnode->next = oldnext;
        oldnext->prev = newnode;
        head->next = newnode;
        newnode->prev = head;
    }
    int get(int key)
    {
        if (m.find(key) == m.end())
        {
            return -1;
        }
        int val = m[key]->val;
        put(key, val);
        return val;
    }

    void put(int key, int value)
    {
        if (m.find(key) != m.end())
        {
            node *oldnode = m[key];
            delnode(oldnode);
            m.erase(key);
        }
        if (m.size() == limit)
        {
            m.erase(tail->prev->key);
            delnode(tail->prev);
        }
        node *newnode = new node(key, value);
        addnode(newnode);
        m[key] = newnode;
    }
};
int main()
{
    return 0;
}