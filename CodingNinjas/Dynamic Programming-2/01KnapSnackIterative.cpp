#include<bits/stdc++.h>
using namespace std;

int knapsack(int* weights, int* values, int n, int maxWeight){
    
int *dp=new int[maxWeight+1]();


for(int i=1;i<=n;i++){
    int *newArr=new int[maxWeight+1]();
    for(int j=1;j<=maxWeight;j++){
        newArr[j]=dp[j];
        if(weights[i-1]<=j){
            newArr[j]=max(values[i-1]+dp[j-weights[i-1]],dp[j]);       
        }
    }
    
        delete []dp;
        dp = newArr;
    
}

    
int res= dp[maxWeight];
      
    delete [] dp;
    return res;
    


}
