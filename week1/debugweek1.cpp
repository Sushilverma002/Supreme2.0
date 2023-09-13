// #include <iostream>
// using namespace std;
// // bool fun(int x, int y)
// // {
// //     return ((x * y) < 0);
// // }
// // void bin(int n)
// // {
// //     if (n > 1)
// //         bin(n / 2);
// //     cout << n % 2;
// // }
// // bool isPower(int &n, int k)
// // {
// //     n &= (~(1 << k));
// // }

// int main()
// {
//     // int x, y;
//     // cin >> x >> y;
//     // fun(x, y);
//     // return 0;
//     // if (~0 == 1)
//     //     cout << "yes";
//     // else
//     //     cout << "no";
//     // int a = 10;
//     // char y = 'a';
//     // a = a + y;
//     // cout << a;
//     // int n = 7;
//     // int k = 1;
//     // int count = 0;
//     // while (n)
//     // {
//     //     n &= (n - 1);
//     //     count++;
//     // }
//     // return count;
//     // bin(n);
//     // // cout << (n & (n - 1));
//     // isPower(n, k);
//     // cout << n;
//     return 0;
// }

// 1.
// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     cin >> c;
//     if (c >= 'a' && c <= 'z')
//     {
//         cout << 0;
//     }
//     else if (c >= 'A' && c <= 'Z')
//     {
//         cout << 1;
//     }
//     else
//     {
//         cout << -1;
//     }
// }

// //decimal to binary
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0, factor = 1;
//     cin >> n;
//     while (n)
//     {
//         int digit = n % 10;
//         sum = sum + digit * factor;
//         factor = 2 * factor;
//         n = n / 10;
//     }
//     cout << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, a = 0;
//     cin >> n;
//     int z = n, digits = 0;
//     while (z != 0)
//     {
//         z = z /10;
//         digits++;
//     }
//     while (n != 0)
//     {
//         int k = n % 10, z = digits - 1;
//         while (z--)
//         {
//             k = k * 10;
//         }
//         a = a + k;
//         digits--;
//         n = n / 10;
//     }
//     cout << a;
//     return 0;
// }
// #include <iostream>
// using namespace std;

/*
Pattern for N = 4
4444
333
22
1
*/

// int main()
// {
//     int i, j, n;
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i + 1; j++)
//         {
//             cout << n - i + 1;
//         }
//         cout << endl;
//     }
// }
/*
Pattern for N = 4
   1
  212
 32123
4321234
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0, gaps = n - 1;
//     while (i < n)
//     {
//         int k = 0, gaps = n - 1 - i;
//         while (k < gaps)
//         {
//             cout << " ";
//             k++;
//         }
//         int num = i + 1;
//         while (num > 0)
//         {
//             cout << num;
//             num = num - 1;
//         }
//         k = 2;
//         while (k <= (i + 1))
//         {
//             cout << k;
//             k++;
//         }
//         k = 0;
//         while (k < gaps)
//         {
//             cout << " ";
//             k++;
//         }
//         i++;
//         cout << "\n";
//     }
// }

/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << col + 1;
//         }
//         for (int col = 0; col < 2 * row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << col + 1;
//         }
//         cout << endl;
//     }
// }

bool checkMember(int n)
{
    int f1 = 1, f2 = 1;
    if (n == 0 && n == 1)
    {
        return true;
    }
    else
    {
        while (1)
        {
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if (temp == n)
            {
                return true;
            }
            else if (temp > n)
            {
                return false;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    bool fibo = checkMember(n);
    cout << fibo;
    return 0;
}