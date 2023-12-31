#include <iostream>
#include <stack>
using namespace std;

// Q1-> implement 2 stacks in an array
class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;
    // constructor creation
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data)
    {
        // overflow ->top2-top2==1
        if (top2 - top1 == 1)
        {
            cout << "stack is not empty:" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        // overflow->top2-top1
        if (top2 - top1 == 1)
        {
            cout << "stack is not empty:" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop1()
    {
        // underflow
        if (top1 == -1)
        {
            cout << "you can't pop the data from stack, hence stack is empty:" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "you can't pop the data from stack, hence stack is empty:" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(6);
    st.push1(10);
    st.push2(100);
    st.print();

    st.push1(20);
    st.push2(80);
    st.print();

    st.push1(30);
    st.push2(70);
    st.print();

    st.pop1();
    st.pop2();
    st.print();
    return 0;
}