#include<bits/stdc++.h>
using namespace std;
int getMin(int *arr, int n){
int *dp=new int[n]();
    int sum=0;
    dp[0]=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
        dp[i]=1+dp[i-1];
        else
            dp[i]=1;
        //cout<<dp[i]<<endl;
    }
    for(int i=n-2;i>=0;i--){
      if(arr[i]>arr[i+1] && dp[i]<=dp[i+1])  
       dp[i]=dp[i+1]+1;
         
		sum+=dp[i];
        //cout<<"2nd"<<dp[i]<<endl;
    }
    sum+=dp[n-1];
    
    delete[] dp;
    return sum;
}
