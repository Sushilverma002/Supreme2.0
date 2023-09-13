#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int b = 6;
    // bool value = 1;
    // cout << (a & b) << endl; ********AND
    // cout << (a | b) << endl;********OR
    // cout << (a ^ b) << endl;*********** XOR
    // cout << (~a) << endl;**********NOT
    // cout << ~(a) << endl;
    // cout << ~value << endl;

    // left shift
    // cout << (a << 1) << endl;

    // int n = 100;
    // cout << (n >> 3);

    // unsinged integer --> we get as output a very large positive number.
    // signed integer --> every thing is handle by the compiler so we won' worry about that.

    // pre increment and post increment operators
    // int a = 10;
    // cout << (++a);
    // cout << (a++);
    // cout << (--a);
    // cout << (a--);
    // cout << (a++) * (++a);

    // BREAK and Continue
    // for (int i = 0; i < 5; i++)
    // {
    //     if (i == 3)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }

    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}