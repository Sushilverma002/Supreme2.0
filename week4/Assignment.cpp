#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int expSearch(int arr[], int n, int target)
{
    // aagar ZERO pe hi targetp pada hai toh
    if (arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while (i < n && arr[i] <= target)
    {
        i = i * 2; // condition for exponential
    }
    return binarySearch(arr, i / 2, min(i, n - 1), target);
}
int main()
{
    // exponential search
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = sizeof(arr) / sizeof(int);
    int target = 13;
    int ans = expSearch(arr, n, target);
    cout << "the exponential search:" << ans << endl;
    return 0;
}

/* ````````````````BOOK ALLOCATION PROBLEM``````````````
class Solution
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int A[], int N, int M,int mid){
        int StudentCount=1;
        int PageCount=0;

        for(int i=0; i<N;i++){
            if(PageCount+A[i]<=mid){
                PageCount+=A[i];
            }else{
                StudentCount++;
                if(StudentCount>M || A[i]>mid){
                    return false;
                }
                PageCount=A[i];
            }
        }
        return true;
    }
    int findPages(int A[], int N, int M)
    {
        //agar m bada aa gaya n se ruk jana hai

        if(M>N){
            return -1;
        }

        int s=0;
        int sum=0;
        int ans=-1;
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(A,N,M,mid)){
                //answer ko mid mein store kara liya or apne end ko piche le gaya;
                ans=mid;
                e=mid-1;
            }else {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;;
    }
};
*/