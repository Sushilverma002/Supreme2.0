#include <iostream>
using namespace std;

// 1. divide two numbers
int DivideTwonumber(int divident, int divisor)
{
    int s = 0;
    int e = divident;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * divisor == divident)
        {
            return mid;
        }
        else if (mid * divisor < divident)
        {
            // ans store kara lunga
            ans = mid;
            // left mai move kar jau ga
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

// 2. binary search in nearly sorted array

int NearlySortedArray(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // ye chiz hame bhulni nahi hai mid - 1
        if ((mid - 1) <= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid + 1 < n && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        if (target < arr[mid])
        {
            // catch
            e = mid - 2;
        }
        else
        {
            // catch
            s = mid + 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    //     int divident = 35;
    //     int divisor = -5;
    //     int noToDivide = DivideTwonumber(abs(divident), abs(divisor));

    //     if ((divisor < 0 && divident > 0) || (divisor > 0 && divident < 0))
    //     {
    //         noToDivide = 0 - noToDivide;
    //     }
    //     cout << noToDivide;

    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 60;
    int nearlysortedarray = NearlySortedArray(arr, n, target);
    cout << nearlysortedarray << " ";

    return 0;
}