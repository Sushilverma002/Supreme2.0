/*stack 2.1 with question number 2 -> vaild paranthises */
/* `````````````````most important question````````*/
#include <iostream>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        // step 1-> stack creation
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if (ch == '{' || ch == '(' || ch == '[')
            {
                // push into stack
                st.push(ch);
            }
            else
            {
                // pop
                if (!st.empty())
                {
                    if (ch == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (ch == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if (ch == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        // no match
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    return 0;
}