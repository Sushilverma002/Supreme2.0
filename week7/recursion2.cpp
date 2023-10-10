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
int main()
{
    // search in array
    int arr[] = {1, 7, 3, 4, 5};
    // int target = 30;
    int size = 5;
    int index = 0;
    // int mini = INT_MAX;

    // cout << searchInArray(arr, target, size, index) << endl;
    // findmin(arr, size, index, mini);
    // cout << "the minimum array will be :" << mini;

    // Q3
    vector<int> crr;
    solve(arr, size, index, crr);

    // print an array
    for (int num : crr)
    {
        cout << num << " ";
    }
    return 0;
}