#include <iostream>
using namespace std;
int dearrangement(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int ans = (n - 1) * (dearrangement(n - 1) + dearrangement(n - 2));
    return ans;
}
int main()
{
    // count the possible dearrangement of the arrays
    int n = 3;
    int dearange = dearrangement(n);
    cout << dearange;
    return 0;
}