#include <iostream>
#include <string.h>
using namespace std;

// Q1.to find the length of string function
int findLengthOfString(char ch[], int size)
{
    int length = 0;
    // using while loop
    int index = 0;
    while (ch[index] != '\0')
    {
        length++;
        index++;
    }

    // for (int i = 0; i < size; i++)
    // {
    //     if (ch[i] == '\0')
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         length++;
    //     }
    // }
    return length;
}

// Q2. reverse the string
void ReverseTheString(char ch[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

// Q3 lower case to upper case
void LowerCaseToUpperCase(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char currentCharcter = ch[index];
        // check for lower case letter
        if (currentCharcter >= 'a' && currentCharcter <= 'z')
        {
            ch[index] = currentCharcter - 'a' + 'A';
        }
        index++;
    }
}
//@4 replace the @ with spaces
void tospaces(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}
// Q5check palindrom
bool checkPalindrom(char ch[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    // iska mtlb sare character match ho gaye toh
    //  retrun true;
    return true;
}
int main()
{
    // char ch[100];
    // // cin>>ch;

    // // to count the space in character so
    // cin.getline(ch, 100);

    // to count the length of string

    // char ch[100];
    // // cin >> ch;
    // cin.getline(ch, 100); // as spaces, tabs get include in string
    // int theLength = findLengthOfString(ch, 100);
    // cout << "the length of string is : " << theLength << " " << endl;

    // // built in function for calculating lenght of string;
    // cout << "the length of string is : " << strlen(ch) << " ";
    // cout << "the char string is: " << ch;

    // // Q2 -> reverse the string
    // char ch[100];
    // // cin >> ch;
    // cin.getline(ch, 100);
    // cout << "before : " << ch << endl;
    // int theLength = findLengthOfString(ch, 100);
    // ReverseTheString(ch, theLength);
    // cout << "after : " << ch;

    // // Q3 convert lower case to uppar case
    // char ch[100];
    // // cin >> ch;
    // cin.getline(ch, 100);
    // cout << "before : " << ch << endl;
    // LowerCaseToUpperCase(ch, 100);
    // cout << "after : " << ch;

    // // Q4 @ to spaces
    // char ch[100];
    // // cin >> ch;
    // cin.getline(ch, 100);
    // cout << "before : " << ch << endl;
    // tospaces(ch, 100);
    // cout << "after : " << ch;

    // Q5 check palindrom
    // char ch[100];
    // cin >> ch;
    // cin.getline(ch, 100);
    // cout << "before : " << ch << endl;
    // int theLength = findLengthOfString(ch, 100);
    // bool palindrome = checkPalindrom(ch, theLength);
    // if (palindrome)
    // {
    //     cout << "vaild palindrom" << endl;
    // }
    // else
    // {
    //     cout << "not a vaild palindrom" << endl;
    // }

    /*                          STRINGS                 */
    string name;

    // input
    // cin >> name;

    // if you want to print with spaces
    getline(cin, name);

    // output
    cout << "the output is:" << name;
    // cout << "the output is:" << name[0];
    return 0;
}