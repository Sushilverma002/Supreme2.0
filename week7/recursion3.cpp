#include <iostream>
using namespace std;
/*Q1-> check for array which is sorted in accending order?*/
bool checkSorted(int arr[], int size, int index)
{
    // base case
    if (index >= size)
    {
        return true;
    }
    if (arr[index] > arr[index - 1])
    {
        // rr call hogi
        bool aggeCheckKar = checkSorted(arr, size, index + 1);
        return aggeCheckKar;
    }
    else
    {
        return false;
    }
}
/*Q2->BINARY SEARCH*/
int binarySearch(int arr[], int start, int end, int target)
{
    int mid = start = (end - start) / 2;
    if (start > end)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, target);
    }
    mid = start + (end - start) / 2;
}
/*Q3-> subsqeunce of string using include and exlude approach*/
void SubsqeunceStr(string str, string output, int index)
{
    /*BASE CASE*/
    if (index >= str.length())
    {
        // output mein kuch na kuch hoga so print that
        cout << "->" << output << endl;
        return;
    }
    // // ek char ch banao ga jisme mera str ka char Store ho Raha hoga "JO STR[INDEX] pe hai."
    char ch = str[index];

    // m2->
    // include
    // output mein phele push kar dunga

    //
    output.push_back(ch);
    SubsqeunceStr(str, output, index + 1);
    // exclude
    output.pop_back();
    SubsqeunceStr(str, output, index + 1);

    // // exclude
    // SubsqeunceStr(str, output, index + 1);

    // // include
    // // output mein phele push kar dunga
    // output.push_back(ch);
    // SubsqeunceStr(str, output, index + 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int index = 1;
    int size = 7;

    /* bool isSorted = checkSorted(arr, size, index);
    if (isSorted)
    {
        cout << "array is sorted:";
    }
    else
    {
        cout << "array is not sorted";
    }



    /*BINARY SEARCH*/
    /*
   int target = 20;
   int start = 0;
   int end = size - 1;
   int binarysearch = binarySearch(arr, start, end, target);
   // cout << binarysearch;
   if (binarysearch != -1)
   {
       cout << "target found:" << binarysearch << endl;
   }
   else
   {
       cout << "target not found" << endl;
   }
   */

    // subquence
    string str = "abc";
    string output = " ";
    int index = 0;
    SubsqeunceStr(str, output, index);
    return 0;
}