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
int main()
{
    int arr[] = {1, 0, 2, 1, 0, 2, 1, 0};
    int n = 8;
    // pritigElementOfNgfirstThenPos(arr, n);
    sortOneTwo(arr, n);
    // printing an array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}