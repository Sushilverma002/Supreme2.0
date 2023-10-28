#include <iostream>
using namespace std;
/*-> MERGE SORT*/
void toMergeArrays(int arr[], int s, int e)
{
    // mid
    int mid = s + (e - s) / 2;

    // lenght of left array
    int leftLength = mid - s + 1;
    // length of right array
    int rightLength = e - mid;

    // left and right arrays->we will create these array as dynically
    int *left = new int[leftLength];
    int *right = new int[rightLength];

    // we are coping values of array into ->left array
    int k = s;
    for (int i = 0; i < leftLength; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // coping original values into right array
    k = mid + 1;
    for (int i = 0; i < rightLength; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // acutal merge ka logic
    // left array is already sorted
    // right arrray bhi sorted hai

    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;

    while (leftIndex < leftLength && rightIndex < rightLength)
    {
        // left gaya main array mein
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainIndex] = left[leftIndex];
            mainIndex++;
            leftIndex++;
        }
        // right gaya mein array mein
        else
        {
            arr[mainIndex] = right[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }

    // 2 more case

    // case 1->left array jab exausht but right array remain with some element so copy as it in array
    while (rightIndex < rightLength)
    {
        arr[mainIndex] = right[rightIndex];
        mainIndex++;
        rightIndex++;
    }

    // case 2->right array jab exausht but left array remain with some element so copy as it in array
    while (leftIndex < leftLength)
    {
        arr[mainIndex] = left[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    // 1 more step please de allocate the memory
    delete[] left;
    delete[] right;
}
void MergeSort(int arr[], int s, int e)
{
    // base case
    if (s == e)
    {
        return;
    }
    if (s > e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // recursive call

    // leftarray ke liye
    MergeSort(arr, s, mid);
    // right array ke liye
    MergeSort(arr, mid + 1, e);
    // to mege the both array;
    toMergeArrays(arr, s, e);
}
int main()
{
    int n = 7;
    int arr[n];
    int s = 0;
    int e = n - 1;
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // print before sorting.
    cout << "Array before sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    MergeSort(arr, s, e);

    // after sorting
    cout << "Array after sorting:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}