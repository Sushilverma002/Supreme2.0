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

// find out square root of a number
int mySqrt(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        // kya mid hi toh answer nahi
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            // ans store
            // right me jao
            ans = mid;
            s = mid + 1;
        }
        else
        {
            // left me jana h
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
// find out square root of a number
int mySqrtUpToDecimalPlaces(int x)
{
    float s = 0;
    float e = x;
    float mid = s + (e - s) / 2;
    float ans = -1;

    while (s <= e)
    {
        // kya mid hi toh answer nahi25.5
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            // ans store
            // right me jao
            ans = mid;
            s = mid + 1;
        }
        else
        {
            // left me jana h
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    // vector<int> arr;
    // arr.push_back(12);
    // arr.push_back(14);
    // arr.push_back(16);
    // arr.push_back(2);
    // arr.push_back(4);
    // arr.push_back(6);
    // arr.push_back(8);
    // arr.push_back(10);
    // int pivotindex = FindPivotIndex(arr);
    // cout << "the Pivot element is : " << pivotindex << endl;
    // int ans = -1;
    // int target = 4;
    // int n = arr.size();
    // // A
    // if (target >= arr[0] && target <= arr[pivotindex])
    // {
    //     ans = binarySearch(arr, 0, pivotindex, target);
    // }
    // else
    // {
    //     ans = binarySearch(arr, pivotindex + 1, n - 1, target);
    // }
    float x;
    cin >> x;
    // int squareRoot = mySqrt(x);
    float squareRoot = mySqrtUpToDecimalPlaces(x);
    cout << squareRoot << endl;

    return 0;
}