#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
bool searchInArray(int *arr, int target, int size, int index)
{
    // base case
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    // recursive call
    bool ansmilgaya = searchInArray(arr, target, size, index + 1);
    return ansmilgaya;
}
// find elements index
int searchArray2(int *arr, int target, int size, int index)
{
    // base case
    if (index >= size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    // recursive call
    searchArray2(arr, target, size, index + 1);
}
// q2-> find minimum element in arr;
void findmin(int arr[], int size, int index, int &mini)
{
    // base case
    if (index >= size)
    {
        return;
    }
    // processing
    mini = min(mini, arr[index]);

    // recursion call
    findmin(arr, size, index + 1, mini);
}
// Q->4 maximum no in array
void findMax(int arr[], int size, int index, int &maxi)
{
    // base case
    if (index >= size)
    {
        return;
    }
    // processing
    maxi = max(maxi, arr[index]);

    // recursion
    findMax(arr, size, index + 1, maxi);
}

// Q->3 check the element wheather it is even or odd if even then insert into vector
void solve(int arr[], int size, int index, vector<int> &crr)
{
    // base case;
    if (index >= size)
    {
        return;
    }
    // processing
    if (arr[index] % 2 == 0)
    {
        // even
        crr.push_back(arr[index]);
    }

    // recusive relation
    solve(arr, size, index + 1, crr);
}
// Q4->double the elements present in array
void DoubleElement(int arr[], int size, int index)
{
    // base case

    if (index >= size)
    {
        return;
    }
    // processing
    arr[index] = arr[index] * 2;
    // recusive relation
    DoubleElement(arr, size, index + 1);
}
// q5-> PRINT ALL THE ELEMENT OF THE NUMBER BIT WISE
void printdigit(int nums)
{
    if (nums == 0)
    {
        return;
    }
    int digit = nums % 10;
    nums = nums / 10;
    // rr
    printdigit(nums);
    // processing
    cout << digit << endl;
}
int main()
{
    // search in array
    int arr[] = {1, 7, 3, 4, 5};
    int target = 1;
    int size = 5;
    int index = 0;
    // int mini = INT_MAX;

    // cout << searchInArray(arr, target, size, index) << endl;
    // cout << searchArray2(arr, target, size, index) << endl;
    // findmin(arr, size, index, mini);
    // cout << "the minimum array will be :" << mini;

    // Q3
    // vector<int> crr;
    // solve(arr, size, index, crr);

    // // print an array
    // for (int num : crr)
    // {
    //     cout << num << " ";
    // }

    // find maximum element in array
    // int maxi = INT_MIN;
    // findMax(arr, size, index, maxi);
    // cout << "the maximum element will be:" << maxi << endl;

    // Q4->
    // DoubleElement(arr, size, index);
    // // print
    // for (int nums : arr)
    // {
    //     cout << nums << " ";
    // }

    // Q5
    int nums = 4521;
    printdigit(nums);

    return 0;
}