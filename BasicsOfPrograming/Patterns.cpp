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

    // numeric half pyramid
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
    // full pyramid
    int xy;
    cin >> xy;
    for (int row = 0; row < xy; row++)
    {
        int k = 0;
        for (int col = 0; col < ((2 * xy) - 1); col++)
        {
            if (col < xy - row - 1)
            {
                cout << " ";
            }
            else if (k < 2 * row + 1)
            {
                cout << "*";
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // hollow pyramid
    int xyz;
    cin >> xyz;
    for (int row = 0; row < xyz; row++)
    {
        int k = 0;
        for (int col = 0; col < ((2 * xyz) - 1); col++)
        {
            if (col < xy - row - 1)
            {
                cout << " ";
            }
            else if (k < 2 * row + 1)
            {
                if (k == 0 || k == 2 * row || row == xyz - 1)
                    cout << "*";
                else
                {
                    cout << " ";
                }
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // full pyramid
    int y;
    cin >> y;
    for (int row = 0; row < y; row++)
    {
        for (int col = 0; col < y - row - 1; col++)
        {
            // space
            cout << " ";
        }
        // star
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // inverted full pyramid
    int z;
    cin >> z;
    for (int row = 0; row < z; row++)
    {
        for (int col = 0; col < row; col++)
        {
            // space
            cout << " ";
        }
        // star
        for (int col = 0; col < z - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // diamond
    int num;
    cin >> num;
    int k = num / 2;
    for (int row = 0; row < k; row++)
    {
        for (int col = 0; col < k - row - 1; col++)
        {
            // space
            cout << " ";
        }
        // star
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < k; row++)
    {
        for (int col = 0; col < row; col++)
        {
            // space
            cout << " ";
        }
        // star
        for (int col = 0; col < k - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // hollow full pyramid
    int u;
    cin >> u;
    for (int row = 0; row < u; row++)
    {
        for (int col = 0; col < u - row - 1; col++)
        {
            // space
            cout << " ";
        }
        // star
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // hollow inverted

    // hollow daimond

    // flipped hald column;
    int num = 8;
    int o = 4;
    for (int row = 0; row < o; row++)
    {
        cout << "*";
    } // INVERTED PYRAMID
    for (int col = 0; col < o - row; col++)
    {
        cout << "*";
    }
    for (int col = 0; col < 2 * row + 1; col++)
    {
        cout << " ";
    }
    for (int col = 0; col < o - row; col++)
    {
        cout << "*";
    }
    cout << endl;
}