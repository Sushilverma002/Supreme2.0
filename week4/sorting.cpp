#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // innerl loop jo ki j ke liye chale ga
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // for increasing order only and for decreasing we have "<" sign
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // inner loop
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex]) // kya mera j chota hai minIndex se agar han toh minIndex usko bana hai
            {
                minIndex = j;
            }
        }
        // swap kardo i ko minIndex se ;
        swap(arr[i], arr[minIndex]);
    }
}
void InsertionSort(int arr[], int n)
{
    // ignore i=0 lement
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // insertion mtlb ki ko update karo
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[5];
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // bubbleSort(arr, n);
    // SelectionSort(arr, n);
    InsertionSort(arr, n);
    // printing the elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}