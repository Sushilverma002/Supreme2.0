#include <iostream>
using namespace std;
int main()
{
    // int num = 8;
    // cout << num << endl;

    // // creatin pointer
    // int *ptr = &num;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    // bad pracitce
    //  int *crr;
    //  cout << *crr;

    // Null pointers->good pracitce
    // int *krr = 0;
    // cout << *krr << endl;

    /*``````````question``````*/
    int a = 100;
    int *ptr = &a;
    a = a + 1;
    ptr = ptr + 1;
    cout << a << endl;
    cout << ptr << endl;
    return 0;
}