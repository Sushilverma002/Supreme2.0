#include <iostream>
#include <stack>
using namespace std;
/*
class stack
{
public:
    int *arr;
    int top;
    int size;

    // constructor creation
    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "you can't push element inside satck overflow occure:" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty underflow occurs:" << endl;
        }
        else
        {
            top--;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "stack is empty under flow occurs:" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    int getSize()
    {
        return top + 1;
    }

    void print()
    {
        cout << "Top:" << top << endl;
        cout << "top element:" << getTop() << endl;
        cout << "stack: ";
        for (int i = 0; i < getSize(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    // // ceration
    // stack<int> st;

    // // insertion
    // st.push(10);
    // st.push(12);
    // st.push(15);

    // // check size
    // cout << "the size of stack is" << st.size() << endl;

    // // deletion
    // st.pop();

    // // check empty
    // if (st.empty())
    // {
    //     cout << "stack is empty" << endl;
    // }
    // else
    // {
    //     cout << "stack is not empty" << endl;
    // }
    // // top
    // st.top();

    // stack implementation without library
    stack st(8);
    st.push(10);
    st.print();
    st.push(10);
    st.print();
    st.push(10);
    st.print();
    st.push(10);
    st.print();

    st.pop();
    st.pop();
    st.print();

    cout << "the top most element of stack is:" << st.getTop() << endl;
    cout << "size of stack is :" << st.getSize();
    return 0;
}

// reverse the string using stack
int main()
{
    string str = "ramramji";
    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        st.push(ch);
    }
    cout << endl;
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    return 0;
}


// q3->insert at the bottom of stack
*/
void insertAtBottom(stack<int> &st, int &element)
{
    // base case
    if (st.empty())
    {
        st.push(element);
        return;
    }

    // 1 case main solve karunga
    int temp = st.top();
    st.pop();

    // baaki recursion sambhale ga
    insertAtBottom(st, element);

    // backTrack
    st.push(temp);
}

/*
int main()
{
    stack<int> st;
    int element = 400;
    st.push(10);
    st.push(100);
    st.push(1000);
    insertAtBottom(st, element);

    // print an array
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
*/

// q4-> reverse a stack ->approach 2 using recursion

void recursionStack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }
    // 1 case mein karu ga baki recursion sambhale ge
    int temp = st.top();
    st.pop();

    // recursion
    recursionStack(st);

    // backtracking
    insertAtBottom(st, temp);
}

//-> Q5 insert in a sorted array
void insertSorted(stack<int> &st, int element)
{
    // base case
    if (st.empty() || element > st.top())
    {
        st.push(element);
        return;
    }
    // 1 case
    int temp = st.top();
    st.pop();

    // recurion
    insertSorted(st, element);

    // backtrack
    st.push(temp);
}

// Q6-> insert in a sorted stack
void sortedStack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }

    // 1 case mein karu ga
    int temp = st.top();
    st.pop();

    // recursion
    sortedStack(st);

    // backtracking
    insertSorted(st, temp);
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(30);
    st.push(60);
    st.push(100);
    st.push(50);
    st.push(20);

    // recursionStack(st);
    // insertSorted(st, 25);

    sortedStack(st);
    // cout << "with reverse:" << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}