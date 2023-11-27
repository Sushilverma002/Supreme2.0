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
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    // reverseQueue(q);
    reverse(q);
    cout << "printing queue" << endl;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        cout << element << " ";
    }
    return 0;
}