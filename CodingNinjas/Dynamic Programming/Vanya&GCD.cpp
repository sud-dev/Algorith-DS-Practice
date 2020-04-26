#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int32_t main(){
    int N,sum=1;
    cin>>N;
    int *arr = new int[N];
    int** dp = new int*[N];//store the no. of ways
    for(int i = 0;i<N;++i){
        dp[i] = new int[100+1]();
    }
    //row has index and column has gcd;
    for(int index = 0;index<N;++index){
        cin>>arr[index];
    }
    //base case
    for(int col = 1;col<=100;++col){
        if(col!=arr[0])
            dp[0][col] = 0;
        else
            dp[0][col] = 1;
    }
    for(int i=1;i<N;++i){
        dp[i][arr[i]] = 1;
        for(int j = i-1;j>=0;--j){
            if(arr[j]<arr[i]){
                for(int gcdNum = 1;gcdNum<=100;++gcdNum){
                    int newGcd = __gcd(gcdNum,arr[i]);
                    dp[i][newGcd]= (dp[j][gcdNum]%mod + dp[i][newGcd]%mod)%mod;
                }
            }
        }
    }
    int output = 0;
    /*for(int row = 0;row<N;++row){
        for(int col = 0;col<=100;++col){
            cout<<dp[row][col]<<" ";
        }
        cout<<endl;
    }*/
    for(int row = 0;row<N;++row){
        output= (output%mod + dp[row][1]%mod)%mod;
    }
    cout<<output<<endl;
    delete [] arr;
    delete [] dp;
    return 0;
}