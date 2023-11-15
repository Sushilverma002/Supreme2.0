#include <iostream>
#include <stack>
using namespace std;

bool CheckRedundant(string &str)
{

    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // PUSH KE LIYE
        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            // pop
            int operatorCount = 0;
            while (!st.empty() && st.top() != '(')
            {
                char temp = st.top();
                if (temp == '+' || temp == '-' || temp == '*' || temp == '/')
                {
                    operatorCount++;
                }
                st.pop();
            }
            // aagar yaha tak poche jab
            //  aapke stack ke top pr ek opening bracket hoga
            st.pop();
            if (operatorCount == 0)
            {
                return true;
            }
        }
    }
    // aagar yaha tak pohohcha hu iska
    // mtlb k har ek bracket k pairs k beech me
    // operator pakka mila hoga
    return false;
}
int main()
{
    string str = "((a+b)*(c+d))";
    bool ans = CheckRedundant(str);
    if (ans == true)
    {
        cout << " Redundant element present:" << endl;
    }
    else
    {
        cout << "no Redundant element is present" << endl;
    }
    return 0;
}