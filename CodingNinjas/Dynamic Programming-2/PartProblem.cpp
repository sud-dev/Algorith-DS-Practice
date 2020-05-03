#include <bits/stdc++.h>
using namespace std;
int *helper(int *weight,int *value,int n,int **dp,int budget){
    int *res=new int[2];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=budget;j++){
            dp[i][j]=dp[i-1][j];
            if(weight[i-1]<=j){
                dp[i][j]=max(value[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
        }
    }
    res[1]=dp[n][budget];
    int i;
    for( i=0;i<=budget;i++)
{
	if(dp[n][i]==dp[n][budget])
	break;
}
    res[0]=i;
  /* for(int i=n;i>=2;){
        for(int j=budget;j>=1;){
            if(dp[i][j]==dp[i-1][j]){
                //res[0]+=weight[i-2];
              i--;
                
            }
            else{
               // res[0]+=weight[i-1];
               i--;
                j--;
                //j=j-weight[i-1];
            }
        }
    } 
    */
    
    
    return res;
    
    
    
}
int main()
{
    int a,b;
cin>>a>>b;
    while(a!=0 && b!=0){
  int budget=a;
        int noOfParties=b;
         int entry[noOfParties]; 
         int fun[noOfParties]; 
for(int i=0;i<noOfParties;i++){
    cin>>entry[i]>>fun[i];
} 
        int **dp=new int*[noOfParties+1];
        for(int i=0;i<=noOfParties;i++){
            dp[i]=new int[budget+1]();
            
        }
    int *res=helper(entry,fun,noOfParties,dp,budget);
  cout<<res[0]<<" "<<res[1];
        cout<<endl;
        delete[] res;
        for(int i=0;i<=noOfParties;i++){
            delete[] dp[i]; 
        }
        delete[] dp;
         cin>>a>>b;
    }
   

    
    return 0;
}
