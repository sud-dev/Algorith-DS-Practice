#include <bits/stdc++.h>
using namespace std;
int helper(int **arr,int n,int m,int **dp){

        for(int i=0;i<m;i++){
        dp[0][i]=arr[0][i];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j]=dp[i-1][j]+arr[i][j];
            if(j==0){
               dp[i][j]=min(dp[i][j],dp[i-1][j+1]+arr[i][j]);
            }
            else if(j==(m-1)){
                 dp[i][j]=min(dp[i][j],arr[i][j]+dp[i-1][j-1]);
            }
            else{
                 dp[i][j]=min(dp[i][j],min(arr[i][j]+dp[i-1][j-1],dp[i-1][j+1]+arr[i][j]));
            }
        }
    }
    int res=INT_MAX;
for(int i=1;i<m;i++){
    res=min(res,dp[n-1][i]);
}
    return res;
    
    
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
        int **dp=new int*[n];
    for(int i=0;i<n;i++){
        dp[i]=new int[m];
        for(int j=0;j<m;j++){
            dp[i][j]=INT_MAX;
        }
    }
    
    cout<<helper(arr,n,m,dp)<<endl;
      /*  for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
           cout<< dp[i][j]<<" ";
        }
            cout<<endl;
    } 
    */
    for(int i=0;i<n;i++){
        delete[] dp[i];
    }
    delete[] dp;
    return 0;
}
