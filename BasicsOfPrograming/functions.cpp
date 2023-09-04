#include <iostream>
using namespace std;
// void printLine()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "sundar ko sundari pasand hai" << endl;
//     }
// }
// int main()
// {
//     printLine();
//     return 0;
// }

/*
first declare then call and then function defination
void printLine();

int main()
{
    printLine();
    return 0;
}
void printLine()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "sundar ko sundari pasand hai" << endl;
    }
}*/

// question 1; sum of three no as print
void PrintSumOf(int a, int b, int c)
{
    int ans = a + b + c;
    cout << ans << endl;
}

// question 2 sum of three no to return
int Printsum(int x, int y, int z)
{
    int answer = x + y + z;
    return answer;
}
// question 3 max of three no
int MaxNO(int num1, int num2, int num3)
{
    // {
    //     if (num1 > num2 && num1 > num3)
    //     {
    //         cout << "maximum no is" << num1 << endl;
    //     }
    //     else if (num2 > num3 && num3 > num2)
    //     {
    //         cout << "maximum no is " << num2 << endl;
    //     }
    //     else
    //     {
    //         cout << "maximum is " << num3 << endl;
    //     }
    int maximum1 = max(num1, num2);
    int maximum2 = max(maximum1, num3);
    return maximum2;
}
// question 4- check even odd
void evenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}
// sum of all no upto n
void sumOfN(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}

// sum of all even no upto n
void sumOfevenN(int num2)
{
    int sum = 0;
    for (int i = 2; i < num2; i = i + 2)
    {
        sum = sum + i;
    }
    cout << sum;
}
// check for prime no or not prime
bool checkForPrime(int e)
{
    for (int i = 2; i < e; i++)
    {
        if (e % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

// counting from 1->N
void counting1toN(int u)
{
    for (int i = 0; i <= u; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    // PrintSumOf(5, 5, 5);

    // int sum = Printsum(1, 2, 3);

    // MaxNO(2, 3, 5);

    // int maxi = MaxNO(2, 3, 5);

    // cout << maxi << endl;

    // cout << sum << endl;

    // evenOdd(6);

    // sumOfN(10);
    // bool prime = checkForPrime(6);
    // if (prime)
    // {
    //     cout << "it is prime no";
    // }
    // else
    // {
    //     cout << "not a prime no";
    // }
    counting1toN(10);
    return 0;
}