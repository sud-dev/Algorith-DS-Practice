#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int countBits(int n,int k,int first,int ***dp){
    int op;
    if(n==1){
        if(k==0){
            return 1;
        }
        
        else{
            return 0;
        }
    }
    if(k<0){
        return 0;
    }
    if(dp[n][k][first]>-1){
        return dp[n][k][first];  
    }
    if(first==1){
        op= (countBits(n-1,k-1,1,dp)%mod + countBits(n-1,k,0,dp)%mod)%mod;
    }
    else{
        op= (countBits(n-1,k,1,dp)%mod + countBits(n-1,k,0,dp)%mod)%mod;
    }
    dp[n][k][first]=op;
    return op;
    
    
    
    
}
int32_t main()
{int p;
 cin>>p;
 
 while(p--){
    int d,n,k;
     cin>>d>>n>>k;
     int ***dp=new int**[n+1];
     for(int i=0;i<=n;i++){
         dp[i]=new int*[k+1];
        for(int j=0;j<=k;j++){
            dp[i][j]=new int[2];
        for(int k = 0;k<2;++k){
                    dp[i][j][k] = -1;
                }
        }
         
     }
     cout<<d<<" "<<(countBits(n,k,0,dp)%mod + countBits(n,k,1,dp)%mod)%mod<<endl;
     delete[] dp;
       
 }
    return 0;
}
