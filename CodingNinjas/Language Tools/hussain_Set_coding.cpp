#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n,m;
cin>>n>>m;
ll a[n];
for(int i=0 ; i<n;i++){

    cin>>a[i];
}
queue<ll> q;
int count_m=0;
int end_p=n-1;
sort(arr,arr+n);
while(m--){

   int curr_m;
   cin>>curr_m;
   ll ans;
   for(;count_m<curr_m;count_m++) {
    if((q.empty() ||(a[end_p] >= q.front())) && end_p>=0){
         ans=a[end_p];
         end_p--;

    }
    else {

        ans=q.front();
        q.pop();

    }
    q.push(ans/2);

   }
   cout<<ans<<endl;

}


return 0;
}
