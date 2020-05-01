#include<bits/stdc++.h>
using namespace std;
int getMaxMoney(int arr[], int n){

int maxMoney=0;
    int *maxSumArr=new int[n]();
    if(n==1){
        return arr[0];
    }
    if(n==2){
        return max(arr[0],arr[1]);
    }

   // cout<<totalMoney<<endl;
    maxSumArr[0]=arr[0];
    maxSumArr[1]=max(arr[1],arr[0]);
//maxSumArr[n-1]=arr[n-1];
   //  maxSumArr[n-2]=arr[n-2];
    for(int i=2;i<n;i++){
        maxSumArr[i]=max(arr[i]+maxSumArr[i-2],maxSumArr[i-1]);
    }
    
    maxMoney=maxSumArr[n-1];
    delete[] maxSumArr;
    return maxMoney;

}
