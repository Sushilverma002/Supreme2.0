#include <iostream>
using namespace std;
void pritigElementOfNgfirstThenPos(int arr[], int n)
{
    int j = 0;
    for (int index = 0; index < n; index++)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
}
void sortOneTwo(int arr[], int n)
{
    int index = 0;
    int left = 0;
    int right = n - 1;
    while (index <= right)
    {
        if (arr[index] == 0)
        {
            swap(arr[index], arr[left]);
            index++;
            left++;
        }
        else if (arr[index] == 2)
        {
            swap(arr[index], arr[right]);
            right--;
        }
        else
        {
            index++;
        }
    }
}
void reArranging(int crr[], int m)
{
    int i = 0;
    int j = m - 1;
    ;
    for (int i = 0; i < m; i++)
    {
        if (crr[i] == crr[j])
        {
            cout << crr[i] << endl;
        }
        i++;
        j--;
    }
}
void negativeFirst(int arr[], int n)
{
    int index = 0;
    int second = 0;
    for (; index < n; index++)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[second]);
            second++;
        }
    }
}
int main()
{
    // int arr[] = {1, 0, 2, 1, 0, 2, 1, 0};`
    // int n = 8;

    int crr[] = {-1, -1, 2, -5, 2, 4};
    int m = 6;
    // pritigElementOfNgfirstThenPos(arr, n);
    // sortOneTwo(arr, n);
    // reArranging(crr, m);
    negativeFirst(crr, m);
    // printing an array

    for (int i = 0; i < m; i++)
    {
        cout << crr[i] << " ";
    }
    return 0;
}