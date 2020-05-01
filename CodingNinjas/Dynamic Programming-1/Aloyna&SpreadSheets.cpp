#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n,m;
    cin>>n>>m;
    int **a=new int*[n];
    int **dp=new int*[n];
    //int dp[n][m];
    int *ans=new int[n];
    for(int i=0;i<n;i++){
        ans[i]=INT_MAX;
        a[i]=new int[m];
        dp[i]=new int[m];
        for(int j=0;j<m;j++){
            dp[0][m]=0;
            cin>>a[i][j]; 
        }
    }
    ans[0]=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>=a[i-1][j]){
                dp[i][j]=dp[i-1][j];
                
            }
            else{
                dp[i][j]=i;
            }
            ans[i]=min(ans[i],dp[i][j]);
            //cout<<ans[i]<<" ";
        }
    }
    int k;
    cin>>k;
    while(k--){
        int l,r;
        cin>>l>>r;
        if(ans[r-1]<=l-1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    delete[] a;
    delete[] ans;
    delete[] dp;
    return 0;
}
 