#include <iostream>
using namespace std;
int main()
{
    // square
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // number
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    /*1234
    1234
    1234
    1234*/
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    // rectangle
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // hollow rectangle
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4)
            {
                cout << "*";
            }
            else
            {
                if (j == 0 || j == 4)
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

    // half pyramid
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // inverted pyramid
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // numeric hald pyramid
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }

    // inverted numeric half pyramid
    int x;
    cin >> x;
    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }
}