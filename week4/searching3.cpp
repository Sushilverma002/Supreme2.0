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

// find odd occurrence
int oddOccurence(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // single element case
        if (start == end)
        {
            return start;
        }
        // odd case

        // mid check for even ood
        if (mid & 1 == 1) // odd
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1; // catch
            }
            else
            {
                end = mid - 1;
            }
        }
        // even case
        else
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2; // catch
            }
            else
            {
                end = mid; // catch
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    // question 1;

    // int divident = 35;
    // int divisor = -5;
    // int noToDivide = DivideTwonumber(abs(divident), abs(divisor));

    //     if ((divisor < 0 && divident > 0) || (divisor > 0 && divident < 0))
    //     {
    //         noToDivide = 0 - noToDivide;
    //     }
    // cout << noToDivide;

    // question 2

    // int arr[] = {20, 10, 30, 50, 40, 70, 60};
    // int n = 7;
    // int target = 60;
    // int nearlysortedarray = NearlySortedArray(arr, n, target);
    // cout << nearlysortedarray << " ";

    // question 3
    // int arr[] = {1, 1, 2, 2, 6, 5, 5, 6, 6, 4, 4};
    // int n = 11;
    // int occurenceElement = oddOccurence(arr, n);
    // cout << "the odd elemet occurnece is : " << occurenceElement << " ";
    return 0;
}