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

    //******************numeric pyramid
}