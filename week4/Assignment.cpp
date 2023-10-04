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



``````````````````` Painter Partition Problem``````````````
class Solution
{
  public:
  bool isPossible(int a[], int n, int k,long long mid){
      long long boardPaint=1;
      long long timeSum=0;

      for(int i=0;i<n;i++){
          if(timeSum+a[i]<=mid){
             timeSum+=a[i];
          }else{
            boardPaint++;
            if(a[i]>mid || boardPaint>k){
                return false;
            }
         timeSum=a[i];
          }
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {

        long long s=0;
        long long sum=0;
        long long ans=-1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        long long e=sum;
        long long mid=s+(e-s)/2;
        while(s<=e){
            if(isPossible(arr,n,k,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};


````````````````````` Agressive Cows `````````````
class Solution {
public:
    int isPossibleSolution(int n, int k,int mid,vector<int> &stalls){
        int countCows=1;
        int lastPos=stalls[0];
        for(int i=0;i<n;i++){
            if(stalls[i]-lastPos>=mid){
            countCows++;
            if(countCows==k)
            {
                return true;
            }
            lastPos=stalls[i];
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {

        // Write your code here
        sort(stalls.begin(),stalls.end());
        int s=0;
        int ans=-1;
        int maxi=-1;

        for(int i=0;i<n;i++){
            maxi=max(maxi,stalls[i]);
        }
        int e=maxi;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(isPossibleSolution(n,k,mid,stalls)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            //har barr bhul jate hai
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
*/