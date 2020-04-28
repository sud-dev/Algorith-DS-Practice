#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n,k,target=0;
    cin>>n>>k;
    int arr[n],sum[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
        sum[0] = arr[0];
    for(int index = 1;index<n;++index){
        sum[index] = sum[index-1] + arr[index];
        //cout<<sum[index]<<endl;
    }
    for(int i=1;i<k;i++){
        target+=i*arr[i]-sum[i-1];

    }
    int ans=target;
    //cout<<target<<" ";
    for(int i=1;i<n-k+1;i++){
target=target-2*(sum[i+k-2]-sum[i-1])+(k-1)*arr[i-1]+(k-1)*arr[i+k-1];
        //cout<<target<<" ";
        if(ans>target){
            ans=target;
      
        }
    //i=i+k;
    }
   cout<< ans<<endl;
    return 0;
}
