#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseQueue(queue<int> &q)
{
    stack<int> st;
    // ek ek baar element lo queue lo and stack mein daalo
    while (!q.empty())
    {
        int frontElement = q.front();
        q.pop();
        st.push(frontElement);
    }
    // one by one stack se wapas queue mein dalo
    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }
}
void reverse(queue<int> &q)
{
    // base case
    if (q.empty())
    {
        return;
    }
    int temp = q.front();
    q.pop();
    // recursion
    reverse(q);
    q.push(temp);
}

/*2. interleave first and second half of queue*/
void interLeaveQueue(queue<int> &first)
{
    queue<int> second;
    // push first half of first queue in second queue
    int size = first.size();
    for (int i = 0; i < size / 2; i++)
    {
        int temp = first.front();
        first.pop();
        second.push(temp);
    }
    // merge karna hai into the original queue ->named as first
    for (int i = 0; i < size / 2; i++)
    {
        int temp = second.front();
        second.pop();

        first.push(temp);

        temp = first.front();
        first.pop();
        first.push(temp);
    }
}

/*question 3 using sliding window -> find first negative integer in every window*/
void printingNegative(int *arr, int n, int k)
{
    deque<int> dq;
    // first window ko process of first k element
    for (int index = 0; index < k; index++)
    {
        int element = arr[index];
        if (element < 0)
        {
            dq.push_back(index);
        }
    }

    // remaning windoe ko process
    // 1.removal of odd element
    // 2.addition of new element(only when no is -ve)
    for (int index = k; index < n; index++)
    {
        if (dq.empty())
        {
            cout << "0" << endl;
        }
        else
        {
            cout << arr[dq.front()] << " ";
        }
        // new index will begin from k
        // aage badhne se phele purani window ka ansar nikal lo

        // removal
        if (index - dq.front() >= k)
        {
            dq.pop_front();
        }
        // addition
        if (arr[index] < 0)
        {
            dq.push_back(index);
        }
    }

    // last window ka answers print kara do
    if (dq.empty())
    {
        cout << "0" << endl;
    }
    else
    {
        cout << arr[dq.front()] << " ";
    }
}
int main()
{
    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);

    // // reverseQueue(q);
    // // reverse(q);
    // interLeaveQueue(q);
    // cout << "printing queue" << endl;
    // while (!q.empty())
    // {
    //     int element = q.front();
    //     q.pop();
    //     cout << element << " ";
    // }

    // sliding window
    int arr[] = {2, -5, 4, -1 - 2, 0, 5};
    int size = 7;
    int k = 3;
    printingNegative(arr, size, k);
    return 0;
}