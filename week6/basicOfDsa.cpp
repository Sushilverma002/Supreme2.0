#include <iostream>
using namespace std;
int FastExponation(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // odd
            ans *= a;
        }
        a = a * a;
        // n/2 bhi karna hai power ko
        b >>= 1; // b=b/2;
    }
    return ans;
}
// simple method->exponation (not prefred as optmized code it some show TLE)
int simpleExponation(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}
int main()
{
    // simple method->exponation
    cout << simpleExponation(5, 4) << endl;
    cout << FastExponation(5, 4);
    return 0;
}