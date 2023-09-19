#include <iostream>
#include <vector>
using namespace std;
int FindPivotIndex(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        else if (mid - 1 < n && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        else if (mid + 1 < n && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int binarySearch(vector<int> &arr, int start, int end, int target)
{

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        int mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr;
    arr.push_back(12);
    arr.push_back(14);
    arr.push_back(16);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);
    int pivotindex = FindPivotIndex(arr);
    // cout << "the Pivot element is : " << pivotindex << endl;
    int ans = -1;
    int target = 4;
    int n = arr.size();
    // A
    if (target >= arr[0] && target <= arr[pivotindex])
    {
        ans = binarySearch(arr, 0, pivotindex, target);
    }
    else
    {
        ans = binarySearch(arr, pivotindex + 1, n - 1, target);
    }

    return ans;
}