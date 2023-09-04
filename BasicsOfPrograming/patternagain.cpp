#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col % 2 == 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << row + 1;
    //         }
    //     }
    //     cout << endl;
    // }

    // ***********************************************pyramid**************************
    /*  *
       * *
      * * *
     * * * *
    * * * * *
   * * * * * *
  * * * * * * *
 * * * * * * * *
* * * * * * * * *
    for (int row = 0; row < n; row++)
    {
        // innerloop
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    */

    //-**************inverted full pyramind************
    /** * * * * *
     * * * * *
     * * * *
     * * *
     * *
     *   */
    // for (int row = 0; row < n; row++)
    // {
    //     // innner loop
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //*****************daimond************
    /* *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *
      for (int row = 0; row < n; row++)
      {
          // innerloop
          for (int col = 0; col < n - row - 1; col++)
          {
              cout << " ";
          }
          for (int col = 0; col < row + 1; col++)
          {
              cout << "* ";
          }
          cout << endl;
      }
      for (int row = 0; row < n; row++)
      {
          // innner loop
          for (int col = 0; col < row; col++)
          {
              cout << " ";
          }
          for (int col = 0; col < n - row; col++)
          {
              cout << "* ";
          }
          cout << endl;
      }
      */

    // ************hollow pyramid*************
    // for (int row = 0; row < n; row++)
    // {
    //     // innner loop
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         // print star for first and last column
    //         if (col == 0 || col == row + 1 - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             // for every column between last and first print space
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ********************************************hollow inverted pyramid
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         if (col == 0 || col == n - row - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    //*************************hollow daimond******************
    // for (int row = 0; row < n; row++)
    // {
    //     // innner loop
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         // print star for first and last column
    //         if (col == 0 || col == row + 1 - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             // for every column between last and first print space
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         if (col == 0 || col == n - row - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    //*********************Fillped half pyramid
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop

    //     // inverted pyramid 1
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     // full pyramid
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     // invertd pyramid 2
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // full flipped pyramid
    /******* ******
    *****   *****
    ****     ****
    ***       ***
    **         **
    *           *
    *           *
    **         **
    ***       ***
    ****     ****
    *****   *****
    ****** *******/
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop

    //     // inverted pyramid 1
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     // full pyramid
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     // invertd pyramid 2
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop -1
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     // inner loop 2
    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     // inner loop 3
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //*******************fancy pattern ***************
    // for (int row = 0; row < n; row++)
    // {
    //     // inner
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col % 2 == 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << row + 1;
    //         }
    //     }
    //     cout << endl;
    // }

    //**************fancy2*************
    // for (int row = 0; row < n; row++)
    // {
    //     // inner
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col % 2 == 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << row + 1;
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop
    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         if (col % 2 == 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << n - row;
    //         }
    //     }
    //     cout << endl;
    // }

    //************* hollow inverted half pyramid ****************

    /** * * * * *
     *       *
     *     *
     *   *
     * *
     **/
    // for (int row = 0; row < n; row++)
    // {
    //     // innner loop
    //     for (int col = 0; col < n - row; col++)
    //     {

    //         if (col == 0 || col == n - row - 1 || row == 0)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    //******************character pyramid
    // for (int row = 0; row < n; row++)
    // {
    //     char ch;
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         int number = col + 1;
    //         ch = number + 'A' - 1;
    //         cout << ch;
    //     }

    //     // jab tak a tak nahi poch jate tab tak
    //     for (char alphabet = ch; alphabet > 'A';)
    //     {
    //         alphabet = alphabet - 1;
    //         cout << alphabet;
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     char ch;
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         int number = col + 1;
    //         ch = number + 'A' - 1;
    //         cout << ch;
    //     }
    //     //
    //     for (char alphabet = ch; alphabet > 'A';)
    //     {
    //         alphabet = alphabet - 1;
    //         cout << alphabet;
    //     }
    //     cout << endl;
    // }

    // numric hollow inverted pyramid
    // for (int row = 1; row <= n; row++)
    // {
    //     // inner loop
    //     for (int col = row; col <= n; col++)
    //     {
    //         if (row == 1 || col == row || col == n)
    //         {
    //             cout << col;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // inverted numric pyramid
    //  for (int row = 1; row <= n; row++)
    //  {
    //      // inner loop
    //      for (int col = 1; col <= row; col++)
    //      {
    //          if (col == 1 || col == row || row == n)
    //          {
    //              cout << col << " ";
    //          }
    //          else
    //          {
    //              cout << "  ";
    //          }
    //      }
    //      cout << endl;
    //  }
    //  for (int row = 1; row <= 5; row++)
    //  {
    //      for (int col = 1; col <= 5 - row + 1; col++)
    //      {
    //          if (row == 1)
    //          {
    //              cout << " " << col << " ";
    //          }
    //          else if (col == 1)
    //          {
    //              cout << " " << row << " ";
    //          }
    //          else if (col == 5 - row + 1)
    //          {
    //              cout << " 5 ";
    //          }
    //          else
    //          {
    //              cout << "   ";
    //          }
    //      }
    //      cout << endl;
    //  }

    // **********************************numric palindrome equilateral pyramid
    // for (int row = 1; row <= n; row++)
    // {
    //     // inner loop
    //     for (int col = 1; col <= n - row; col++)
    //     {
    //         cout << " ";
    //     }
    //     // assending
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col;
    //     }
    //     // descending
    //     for (int col = row - 1; col >= 1; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    //***************** fancy pattern 3
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop 1
    //     for (int col = 0; col < (2 * n - row - 2); col++)
    //     {
    //         cout << "*";
    //     }
    //     // inner loop 2
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row + 1 << "*";
    //     }
    //     // inner loop3
    //     for (int col = 0; col < (2 * n - row - 2); col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // solid half daimond
    /**
     **
     ***
     ****
     ***
     **
     **/
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // floy'd triangle
    /*1
    23
    456
    78910
    1112131415
    161718192021*/
    // int count = 1;
    // for (int row = 0; row < n; row++)
    // {
    //     // inner loop
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << count;
    //         count++;
    //     }
    //     cout << endl;
    // }

    // butterfly pattern
    for (int row = 0; row < n; row++)
    {
        // inner loop 1
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * n - 2 * row - 2; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        // inner loop 1
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}