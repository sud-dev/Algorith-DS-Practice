#include<bits/stdc++.h>
using namespace std;
#define int long long
int search(int low,int high,int n){
    if(n==1){
        return 1;
    }
    if(low>high){
        return low;
    }
    int k = (high+low)/2;
   int sum=0,curr=n;
    while(curr>0){
        if(curr<k){
            sum+=curr;
            curr=0;
        }
        else {
      sum+=k;
        curr-=k;
        curr=curr - curr/10;  
        }
    }
    if(2*sum>=n){
    return search(low,k-1,n);   
    }
    else{
       return search(k+1,high,n);  
    }
//cout<<k<<endl;
    

    
    
}
int32_t main()
{
 
     int n;
        cin>>n;
    cout<<search(1,n,n);
	return 0;
}




