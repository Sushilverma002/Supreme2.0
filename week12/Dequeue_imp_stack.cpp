#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void pushBack(int val)
    {
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "overflow occur" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = val;
        }
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    void pushFront(int val)
    {
        if (front == 0)
        {
            cout << "overflow" << endl;
        }
        else if (front == -1 && rear1 == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        // circular maintain
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = val;
        }
        else
        {
            front--;
            arr[front];
        }
    }
    void popFront()
    {
        // underflow
        if (front == -1 && rear == -1)
        {
            cout << "underflow occurs:" << endl;
        }
        else if (front == rear)
        {
            // single element wala case
            arr[front] = -1;
            rear = -1;
            front = -1;
        }
        else
        {
            // normal case
            arr[front] = -1;
            front++;
        }
    }
    void popBack()
    {
        // underflow
        if (front == -1 && rear == -1)
        {
            cout << "underflow occurs:" << endl;
        }
        // single element
        else if (front == rear)
        {
            // single element wala case
            arr[rear] = -1;
            rear = -1;
            front = -1;
        }
        // normal
        else
        {
            // normal case
            arr[rear] = -1;
            rear--;
        }
    }
};
int main()
{

    return 0;
}