#include <iostream>
using namespace std;
void solve(int *arr, int n)
{
    // cout << "Inside function arr" << arr << endl;
    // cout << "Inside function &arr" << &arr << endl;
    *arr = *arr + 1;
}
int main()
{ /*
  // this can't be possible becoze you try to point an
  // pointer to whole array so sytanx is diff.
  int arr[5] = {0, 1, 2, 3, 4};
  int *ptr = &arr;

  // Pointer to an array->so this is syntax for any dtype
  int crr[4] = {0, 1, 2, 3};
  int(*ptr1)[4] = &crr;
  */

    // Pointer in Functions;
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    solve(arr, n);
    // cout << "Inside main->arr:" << arr << endl;
    // cout << "Inside main->&arr:" << &arr << endl;

    // print an array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}