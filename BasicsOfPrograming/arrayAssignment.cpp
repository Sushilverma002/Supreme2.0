#include <iostream>
using namespace std;
void DuplicateElement(int arr[], int n)
{
    int i = 0;
    int j = 1;
    for (; i < n; i++)
    {
        if (arr[i] == arr[j])
        {
            cout << "there is  duplicate" << endl;
            j++;
            i++;
        }
        else
        {
            cout << "no duplicate" << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 5, 4, 6, 7, 8, 9, 1, 11};
    int n = 10;
    DuplicateElement(arr, n);
    return 0;
}