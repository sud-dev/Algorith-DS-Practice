#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int>A){
    int* freqArr=new int[1001]();
    int* dp=new int[1001];
        for(int x:A){
        ++freqArr[x];
    }
    dp[0]=0;
    dp[1]=1*freqArr[1];
for(int i=2;i<1001;i++){
    dp[i]=max(dp[i-2]+ i*freqArr[i],dp[i-1]);
}
    int op=dp[1000];
    delete[] dp;
    return op;
    

}