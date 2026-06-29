#include <bits/stdc++.h>
using namespace std;
class CircularQueue
{
private:
    vector<int> items;
    int front, rear;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        // 5 is max no of element allowed
        if ((rear + 1) % 5 == front)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }

    void insert(int element)
    {
        if (isFull())
        {
            cout << "Queue Overflow! Cannot insert " << element << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        // increase the rear position
        // 5 is max no of element allowed

        rear = (rear + 1) % 5;
        items[rear] = element;
        cout << "Inserted: " << element << endl;
    }

    int remove()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Nothing to delete." << endl;
            return -1;
        }

        int element = items[front];

        if (front == rear)
        {
            // Queue has only one element, reset after deletion

            front = -1;
            rear = -1;
        }
        else
        {
            // 5 is max no of element allowed
            front = (front + 1) % 5;
        }
        return element;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty."<<endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true)
        {
            cout << items[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % 5;
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue cq;
    return 0;
}