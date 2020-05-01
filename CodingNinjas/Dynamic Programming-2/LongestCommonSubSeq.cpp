#include<iostream>
#include<cstring>
using namespace std;
int helper(const char* s1,const char* s2,int m,int n,int **dp){
if(m==0 || n==0){
    return 0;
}
    if(dp[m][n]>-1){
        return dp[m][n];
    }

if(s1[0]==s2[0]){
    dp[m][n]= 1+helper(s1+1,s2+1,m-1,n-1,dp);
}
    else{
        int op1=helper(s1+1,s2,m-1,n,dp);
        int op2=helper(s1,s2+1,m,n-1,dp);
       dp[m][n]=max(op1,op2); 
    }
  
  return dp[m][n];  
    
}
int lcs(string s1, string s2){
int m=s1.length();
    int n =s2.length();
int **dp=new int*[m+1];
    for(int i=0;i<=m;i++){
        dp[i]=new int[n+1];
        for(int j=0;j<=n;j++){
            dp[i][j]=-1;
        }
    }
int op= helper(s1.c_str(),s2.c_str(),m,n,dp);
    for(int i=0;i<=m;i++){
        delete[] dp[i];
    }
    delete []dp;
    return op;


}
