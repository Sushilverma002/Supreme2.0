/*
#include <iostream>
using namespace std;
int firstOccurenece(int arr[], int n, int target)
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
            e = mid - 1;
        }
        else if (target < mid)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurenece(int arr[], int n, int target)
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
        else if (target < mid)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int totalOccurence(int arr[], int n, int target)
{
    int firstOccur = firstOccurenece(arr, n, target);
    int lastsOccur = lastOccurenece(arr, n, target);
    int totaloccur = (lastsOccur - firstOccur + 1);
    return totaloccur;
}
// nearly sorted array
int nearlySortedArray(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 6, 1, 2, 6, 8, 9};
    int n = 7;
    int target = 9;
    // int first = firstOccurenece(arr, n, target);
    // cout << "the firsr occurence:" << first << endl;
    // int last = lastOccurenece(arr, n, target);
    // cout << "the last occurence:" << last;
    // int total = totalOccurence(arr, n, target);
    // cout << "last occurence is:" << total << endl;

    int nearlysortedarray = nearlySortedArray(arr, n, target);
    cout << "the nearly sorted array is:" << nearlysortedarray << " ";
    return 0;
}
*/
#include <iostream>
using namespace std;

// bubble sort
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // inner loop
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// selection sort
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}
int main()
{
    int arr[] = {2, 0, 15, 2, 7, 1};
    int n = 6;
    // bubbleSort(arr, n);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}