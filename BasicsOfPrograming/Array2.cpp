#include <iostream>
using namespace std;

// printing arrays
void printArray(int arr[], int n)
{
    arr[0] = 100;
}
int getunique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << arr[i] << "," << arr[j] << " " << arr[k] << endl;
            }
        }
    }
}

// shift array
void shiftarray(int arr[], int n)
{
    // step 1
    int temp = arr[n - 1];
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

// count 0 and 1 approach 1;
void countZeroOne(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    // // step 2 print
    // int i;
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int j = i; j < n; j++)
    // {
    //     arr[j] = 1;
    // }
    int index = 0;
    while (zeroCount--)
    {
        arr[index] = 0;
        index++;
    }
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}

// approach 2
void CountZeroOneTwoPointer(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        while (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
        }
    }
}

void printarrayji(int arr[], int n)
{
    // array is printed
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void printdyamicarray(int arr[], int n)
{
    cout << "array is printing" << endl;
    // print an dyamic array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // int n = 5;
    // int arr[5] = {5, 4, 6, 2, 3};
    // printArray(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int n = 6;
    // int arr[] = {1, 3, 2, 5, 4, 6};
    // int ans = getunique(arr, n);
    // cout << ans;

    // int n = 5;
    // int arr[] = {1, 2, 3, 4, 5};
    // shiftarray(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << ' ';
    // }

    // sort zero and one
    // int n = 10;
    // int arr[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    // // countZeroOne(arr, n);
    // CountZeroOneTwoPointer(arr, 10);
    // // print
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // static memory allocation
    // int arr[5] = {1, 5, 3, 6, 4};
    // printarrayji(arr, 5);

    // dyanamic array allocation
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }

    // let me try to add /insert more data in array
    for (int i = 0; i < 10; i++)
    {
        arr[n + i] = 80;
    }
    printdyamicarray(arr, n);

    return 0;
}