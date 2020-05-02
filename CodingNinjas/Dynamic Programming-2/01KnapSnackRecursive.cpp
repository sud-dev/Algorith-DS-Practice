#include<bits/stdc++.h>
using namespace std;
int helper(int *weight,int *val,int n,int w,int **dp){
  if(n==0 || w==0){
      return 0;
  } 
    if(dp[n][w]>-1){
        return dp[n][w];
    }
if(weight[n-1]>w){
    
    dp[n][w]=helper(weight,val,n-1,w,dp);
}
    else{
        int op1=val[n-1]+helper(weight,val,n-1,w-weight[n-1],dp);
        int op2=helper(weight,val,n-1,w,dp);
        dp[n][w]=max(op1,op2);
        
    }
    
    return dp[n][w];
    
    
}
int knapsack(int* weights, int* values, int n, int maxWeight){
    
int **dp=new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=new int[maxWeight+1];
        for(int j=0;j<=maxWeight;j++){
            dp[i][j]=-1;
        }
    }

    
int res= helper(weights,values,n,maxWeight,dp);
        /*    for(int i=0;i<=n;i++){
        
        for(int j=0;j<=maxWeight;j++){
           cout<< dp[i][j];
        }
            cout<<endl;
    }
    */
    return res;
    


}
