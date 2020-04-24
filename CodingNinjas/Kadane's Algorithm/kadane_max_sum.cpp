#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll kadane(int a[],int n){
ll curr_sum=0,max_sum=0;
for(int i=0;i<n;i++){
    curr_sum+=a[i];
    if(curr_sum>max_sum){
        max_sum=curr_sum;
    }
    if(curr_sum<0){
            curr_sum=0;
    }

}
return max_sum;
}

ll maxSumSubArray(int a[],int n,int k){
    ll kadane_sum=kadane(a,n);
if(k==1)
return kadane_sum;

ll total_sum,best_sum;
ll curr_prefix_sum=0,prefix_max_sum=INT_MIN;
ll curr_suffix_sum=0,suffix_max_sum=INT_MIN;

for(int i=0;i<n;i++){
curr_prefix_sum+=a[i];

if(prefix_max_sum<curr_prefix_sum)
    prefix_max_sum=curr_prefix_sum;
}

for(int i=n-1;i>=0;i--){
curr_suffix_sum+=a[i];

if(suffix_max_sum<curr_suffix_sum)
    suffix_max_sum=curr_suffix_sum;
}
total_sum=curr_prefix_sum;
if(total_sum>=0){

    best_sum=max((suffix_max_sum+((k-2)*total_sum)+prefix_max_sum),kadane_sum);


}

else if(total_sum<0)
best_sum=max(suffix_max_sum+prefix_max_sum,kadane_sum);


return best_sum;
}


int main()
{ int t;
cin>>t;
while(t--){

int n,k;
cin>>n>>k;
int a[n];
for(int i=0 ; i<n;i++){

    cin>>a[i];
}
cout<<maxSumSubArray(a,n,k)<<endl;
}
return 0;
}
