#include <iostream>
#include <limits.h>

using namespace std;

// Linear Search
bool LinearSearch(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return false;
}
// count one two zero
int CountOneZero(int arr[], int size)
{
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    cout << "count of zzero:" << count0 << endl;
    cout << "count of ONE:" << count1 << endl;
}

// checkTheMinimum
int checkTheMinimum(int arr[], int size)
{
    int miniAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < miniAns)
        {
            // updation
            miniAns = arr[i];
            // or
            miniAns = min(arr[i], miniAns);
        }
    }
    return miniAns;
}

// reverse an array
void ReverseAnArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // priting of array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // for (int start = 0, end = size - 1; start < end; start++, end--)
    // {
    //     swap(arr[start], arr[end]);
    // }
    // // priting of array
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}

// extream print of an array
void extreamPrintOfAnArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
}
int main()
{
    // int arr[10];
    // char crr[100];
    // bool bol[100];
    // cout << "array is created" << &arr << endl;
    // cout << "array is created" << sizeof(arr) << endl;

    // array intializations
    // int arr[] = {2, 5, 6};
    // int crr[5] = {2, 5, 6, 4, 5};
    // int krr[2] = {2, 4, 5};
    // int mrr[2] = { 1 }

    // arr indexing
    // int arr[] = {2, 5, 6, 5, 6, 55, 6, 8, 6, 6};
    // cout << arr[0] << endl;
    // cout << arr[2] << endl;
    // cout << arr[1] << endl;
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // taking inputs
    // int arr[5];
    // int n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "the value of arr" << i << endl;
    //     cin >> arr[i];
    //     cout << endl;
    // }

    // // printing an array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // problem 1

    // create arr of size 10
    // int arr[10];

    // // taking input

    // int n = 10;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "ENTER THE VALUE OF ARRAY AT " << i << ":";
    //     cin >> arr[i];
    //     cout << endl;
    // }

    // // double the all values present in array;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << " the value after double:" << arr[i] * 2 << endl;
    // }

    // Problem statement 2
    // int sum = 0;
    // int arr[5];
    // int n = 5;
    // // taking inputs of array
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     sum = sum + arr[i];
    // }
    // cout << "sum of array is" << sum;

    // LinearSearch
    // int key;
    // cin >> key;
    // int arr[5] = {5, 6, 7, 8, 9};
    // bool ls = LinearSearch(arr, key, 5);
    // if (ls)
    // {
    //     cout << "key match in the array";
    // }
    // else
    // {
    //     cout << "key doesnot match in the array";
    // }

    // count zzero and one
    // int arr[7] = {1, 0, 0, 0, 1, 0, 1};
    // int cn = CountOneZero(arr, 7);
    // int arr[6] = {6, 0, 2, 5, 4, 10};
    // int size = 6;
    // int minimum = checkTheMinimum(arr, 6);
    // cout << minimum << endl;

    // reverse an array
    // int arr[5] = {20, 30, 40, 50, 60};
    // int size = 5;
    // // ReverseAnArray(arr, 6);
    // extreamPrintOfAnArray(arr, 5);

    int arr[2];
    0 [arr] = 0;
    cout << 0 [arr];
    return 0;
}
