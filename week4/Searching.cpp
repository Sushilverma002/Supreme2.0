#include <iostream>
using namespace std;

// binary search
int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
// firstOccurance
int firstOccurance(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        // galti yahan karte hai ki bhul jate hai
        mid = (start + end) / 2;
    }
    return ans;
}

// last occurnace
int lastOccurance(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        // bhul jate hai
        mid = s + (e - s) / 2;
    }
    return ans;
}
// total occurance
int totalOccurance(int arr[], int n, int target)
{
    int first = firstOccurance(arr, n, target);
    int last = lastOccurance(arr, n, target);
    int total = last - first + 1;
    return total;
}

int MissingNumber(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    // single element

    if (ans + 1 == 0)
    {
        return ans;
    }
    return ans + 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int target = 4;
    int n = 9;
    // int ans = binarySearch(arr, n, target);
    // int ans = firstOccurance(arr, n, target);
    // int ans = lastOccurance(arr, n, target);
    // int totalone = totalOccurance(arr, n, target);
    int missingNumber = MissingNumber(arr, n);
    cout << missingNumber;
    return 0;
}