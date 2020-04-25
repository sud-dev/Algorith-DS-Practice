#include<bits/stdc++.h>
using namespace std;
int minOperations(vector<int> v,int k){
    sort(v.begin(),v.end());
    int opsNeeded=0;
    for(int i=0;i<k;i++){
            opsNeeded+=v[k-1]-v[i];


    }
    int ans=opsNeeded;
    for(int i=k;i<v.size();i++){
        opsNeeded-=v[i-1]-v[i-k];

        opsNeeded+=(k-1)*(v[i]-v[i-1]);


        ans = min(ans, opsNeeded);
    }
    return ans;


}
int main(){
vector<int> arr = {5, 3, 10, 5};
    int n = arr.size();
    int k = 2;

    cout << minOperations(arr, k);

    return 0;



return 0;

}
