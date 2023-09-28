#include <iostream>
#include <vector>
using namespace std;
void DuplicateElement(int arr[], int n)
{
    int i = 0;
    int j = 1;
    for (; i < n; i++)
    {
        if (arr[i] == arr[j])
        {
            cout << "there is  duplicate" << endl;
            j++;
            i++;
        }
        else
        {
            cout << "no duplicate" << endl;
        }
    }
}
void missingElement(int arr[], int n)
{
    // visited
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    // now all positive no
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            cout << i + 1 << " ";
    }
}
// method 2
void missingElementTwo(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // now find the missing numbers;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != i + 1)
    //         cout << i + 1 << " ";
    // }
}

// print like a wake in 2D matrix column wise
void waveLikePrint(vector<vector<int>> v)
{
    int n = v.size();
    int m = v[0].size();
    for (int startcol = 0; startcol < n; startcol++)
    {
        if ((startcol & 1) == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i][startcol] << " ";
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << v[i][startcol] << " ";
            }
        }
    }
}
// row wise
void waveLikePrint(vector<vector<int>> v)
{
    int n = v.size();
    int m = v[0].size();
    for (int startcol = 0; startcol < n; startcol++)
    {
        if ((startcol & 1) == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[startcol][i] << " ";
            }
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << v[startcol][i] << " ";
            }
        }
    }
}

int main()
{
    // int arr[] = {3, 3, 3, 2, 1};
    vector<vector<int>> v{{1, 2, 3},
                          {2, 5, 4},
                          {3, 5, 4}};
    waveLikePrint(v);
    // DuplicateElement(arr, n);
    // missingElement(arr, n);
    // missingElementTwo(arr, n);
    return 0;
}

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>ans;
//         //variable and size declartion
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int count=0;
//         int total=row*col;

//         //index initialization
//         int startingrow=0;
//         int endingcol=col-1;
//         int endingrow=row-1;
//         int startingcol=0;

//         while(count<total){
//             //printing staring row
//             for(int index=startingcol; count<total && index<=endingcol;index++){
//                 ans.push_back(matrix[startingrow][index]);
//                 count++;
//             }
//             startingrow++;
//             //printing ending column
//             for(int index=startingrow; count<total && index<=endingrow;index++){
//                 ans.push_back(matrix[index][endingcol]);
//                 count++;
//             }
//             endingcol--;
//             //printing ending row
//             for(int index=endingcol; count<total && index>=startingcol;index--){
//                 ans.push_back(matrix[endingrow][index]);
//                 count++;
//             }
//             endingrow--;
//             //printinf staring col
//             for(int index=endingrow; count<total && index>=startingrow;index--){
//                 ans.push_back(matrix[index][startingcol]);
//                 count++;
//             }
//             startingcol++;
//         }
//         return ans;
//     }
// };