#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // ceration
    stack<int> st;

    // insertion
    st.push(10);
    st.push(12);
    st.push(15);

    // check size
    cout << "the size of stack is" << st.size() << endl;

    // deletion
    st.pop();

    // check empty
    if (st.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }
    // top
    st.top();
    return 0;
}