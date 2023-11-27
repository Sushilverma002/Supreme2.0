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
    void push(int val)
    {
        // check list
        if (rear == size - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        else if (front == -1 && rear == -1)
        {
            // empty wala case
            rear++;
            front++;
            arr[rear] = val;
        }
        else
        {
            // normal wala case
            rear++;
            arr[rear] = val;
        }
    }
    void pop()
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
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }
    int getFront()
    {
        if (front == -1)
        {
            cout << "no element in queue,cannot give front element" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    int getRear()
    {
        if (rear == -1)
        {
            cout << "no element in queue,can give the rear element" << endl;
        }
        else
        {
            return arr[rear];
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q(6);
    q.print();

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(25);
    q.print();

    cout << "size of queue is:" << q.getSize() << endl;
    q.pop();
    q.print();
    cout << "the front element of queue is" << q.getFront() << endl;
    q.print();
    q.push(100);
    q.print();

    cout << "get rear element of the queue" << q.getRear() << endl;

    return 0;
}