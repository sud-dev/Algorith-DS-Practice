#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int **arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[3];
    }
    double *dp=new double [n];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
       for(int i=0;i<n;i++){
        
            dp[i]=-DBL_MAX;
        
    }
    dp[0]=arr[0][2];
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i]=max(dp[i],dp[j]-sqrt(pow(abs(arr[j][0]-arr[i][0]),2)+pow(abs(arr[j][1]-arr[i][1]),2)));
        }
        dp[i]+=arr[i][2];
    }
       cout << fixed << setprecision(6);     
    cout<<dp[n-1];
    delete [] dp;
    delete [] arr;
    return 0;
}
