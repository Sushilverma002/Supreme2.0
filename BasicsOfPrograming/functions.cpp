#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14;
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

//****************Homework*************

// area of circle
void areaOfCircle(int r)
{
    double area = 3.14 * r * r;
    cout << "area of circle is " << area;
}

// prime no from i ot n
bool PrimeNoOnetoN(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// print digit of the intger;
int PrintAllDigit(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        cout << "the digit is:" << digit << endl;
    }
}

// decimal to binary method 1
int DecimaToBinayMethodQ(int n)
{
    int i = 0;
    int ans = 0;
    while (n > 0)
    {
        int bit = n % 2;
        ans = bit * pow(10, i++) + ans; // this formula will give us binary no that was found after conversion of decimal no;
        n = n / 2;
    }
    return ans;
}

// method 2 for decimal to binary
int DecimaToBinayMethod2(int n)
{
    // bitwise method
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        ans = bit * pow(10, i++) + ans; // this formula will give us binary no that was found after conversion of decimal no;
        n = n >> 1;
    }
    return ans;
}

// binary to decimal
int binaryToDecimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        ans = bit * pow(2, i++) + ans;
        n = n / 10;
    }
    return ans;
}

// degree celcius into kelvin.
void degreeTokel(int degree)
{
    int kelvin = degree + 273;
    cout << "the conversion of degree to fhern. is:" << kelvin << "F" << endl;
}

// FHERNHI into kelvin
void kelToDeg(int kelvin)
{
    int deg = kelvin - 273;
    cout << "the degree celcius of fheri is :" << deg << "C" << endl;
}

//  degree into Fahrenheit
void degreetoFrahenheit(int d)
{
    double deg = ((d * 1.80) + 32);
    cout << "the conversion is:" << deg << "F" << endl;
}
void franhenheitToDegree(int f)
{
    double deg = ((f - 32) * 5 / 9);
    cout << "the conversion is:" << deg << "C" << endl;
}

// factorial of a no.
long long int FactorialOfNumber(long long int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
// function for even and odd
void EvenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd";
    }
}

// ODD EVEN WITH BITWISE OPERATOR
void EvenOddBitwise(int n)
{
    if (n & 1 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd";
    }
}

// km into miles
void kmToMiles(int n)
{
    double miles = n / 1.608;
    cout << "miles will be: " << miles << "Miles";
}

// count set bit of a no
void CountSetBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        int bit = n % 10;
        n = n / 10;
        count++;
    }
    cout << count << endl;
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
    // counting1toN(10);
    // areaOfCircle(2);

    // print prime no 1 to n
    /*
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = PrimeNoOnetoN(i);
        if (isPrime)
        {
            cout << i << " ";
        }
    }
    */

    // int n;
    // cin >> n;
    // int digi = PrintAllDigit(n);

    // decimal to binary
    // int n;
    // cin >> n;
    // int binary = DecimaToBinayMethodQ(n);
    // cout << binary << endl;
    // int binary2 = DecimaToBinayMethod2(n);
    // cout << binary2 << endl;
    // int decimal = binaryToDecimal(n);
    // cout << decimal;
    // degreeToFren(n);
    // fehreToDg(n);
    // degreetoFrahenheit(50);
    // franhenheitToDegree(50);4
    // int n1;
    // cin >> n1;
    // int factori = FactorialOfNumber(n1);
    // cout << "factorial of a number is:" << factori << endl;
    int n;
    cin >> n;
    // EvenOdd(n);
    // cout << endl;
    // EvenOddBitwise(n);
    // kmToMiles(n);
    CountSetBit(n);
    return 0;
}