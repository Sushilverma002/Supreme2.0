#include <iostream>
using namespace std;
int main()
{
    // square
    // int n;
    // cin >> n;
    // int m;
    // cin >> m;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // int i = 0;
    // int j = 0;
    // while (i < n)
    // {
    //     while (j < n)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    //     j = 0;
    // }

    //************************************rectangle******************
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < m; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int i = 0;
    // int j = 0;
    // while (i < n)
    // {
    //     while (j < m)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     i++;
    //     cout << endl;
    //     j = 0;
    // }

    //*******************hollow rectangle*******
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (row == 0 || row == 4)
            {
                cout << "*";
            }
            else
            {
                if (col == 0 || col == 4)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    // int row = 0;
    // int col = 0;
    // while (row < 5)
    // {
    //     while (col < 5)
    //     {
    //         if (row == 0 || row == 5)
    //         {
    //             cout << "*";
    //             col++;
    //         }
    //         else
    //         {
    //             if (col == 0 || col == 5)
    //             {
    //                 cout << "*";
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     row++;
    //     cout << endl;
    // }

    //*************half pryramid
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // inverted half pryramid
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // numeric half pyramid
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    // inverted numeric half pyrmaid
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    // hollow half inverted pyramid
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0 || j == 0 || j == 6 - i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}