#include<iostream>
#include<vector>
using namespace std;
int solveUsingRecursion(int m,int weight[],int profit[],int index,int n){
    //base case
    if(index==n-1){
        if(weight[index]<=m){
            return profit[index];
        }
        else{
            return 0;
        }
    }
    
}

int main(){
    int m=50;
    int weight[]={10, 20, 30};
    int profit[]={60,100,120};
    int index=0;
    int n=3;
    int ans=solveUsingRecursion(m,weight,profit,index,n);
    cout<<"maximum profit will be"<<ans;
    return 0;
}