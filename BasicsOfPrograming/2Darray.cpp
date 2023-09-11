#include <iostream>
#include <limits.h>
using namespace std;

// function for PRINTING  TWO D ARRAY
void twoDarray(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// COLUMN WISE ACCESS
void columnWiseAcces(int arr[][3], int m, int n)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

// linear search array in 2d matrix
bool linearSearchinTwoDmatrix(int arr[][3], int n, int m, int traget)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == traget)
            {
                return true;
            }
        }
    }
    // is line pe tabhi aao ge tabhi aao ge jab check kar liya hoga aagr nahi mila to return kar dunga false
    return false;
}
// maximum no from array;

int findmax(int arr[][3], int n, int m)
{
    int maxAns = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}
int findmin(int arr[][3], int n, int m)
{
    int MinNO = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < MinNO)
            {
                MinNO = arr[i][j];
            }
        }
    }
    return MinNO;
}

// SUM OF THE ROW OF THE MATRIX
void sumOfRows(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

// transpose of the martix
void transpose(int arr[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
int main()
{
    // int n = 2;
    // // cin >> n;
    // int m = 3;
    // // cin >> m;
    int arr[3][3] = {{1, 2, 3},
                     {2, 3, 4},
                     {5, 6, 7}};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // twoDarray(arr, n, m);
    // columnWiseAcces(arr, m, n);

    // input of 2d matrix
    // int arr[2][3];
    int n = 3;
    int m = 3;
    // int target = 40;
    // cout << "the maximum no in array is:" << findmax(arr, n, m) << endl;
    // cout << "the findmin no in array is:" << findmin(arr, n, m) << endl;
    // sumOfRows(arr, n, m);
    transpose(arr, n, m);
    // cout << "you got it :" << linearSearchinTwoDmatrix(arr, n, m, target) << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    return 0;
}