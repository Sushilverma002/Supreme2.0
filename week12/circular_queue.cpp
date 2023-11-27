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
        // overflow
        // empty
        // circular
        // normal
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

    void pop()
    {
        // underflow
        // single element
        // circular
        // normal
        if (front == -1 && rear == -1)
        {
            cout << "underflow occurs" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front++;
        }
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void print()
    {
        cout << "Front" << front << endl;
        cout << "Rear" << rear << endl;
        cout << "priting elements" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q(5);
    q.push(50);
    q.push(500);
    q.push(5000);
    q.push(50000);
    q.push(500000);
    q.print();

    q.push(5000000);
    q.print();

    q.pop();
    q.pop();
    q.pop();
    q.print();

    // circular list check
    q.push(5000000);
    q.print();
    q.push(50);
    q.push(500);
    q.push(5000);
    q.push(50000);
    q.push(500000);
    q.print();
    return 0;
}
