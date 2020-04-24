#include<bits/stdc++.h>
using namespace std;

void PairSum(int *input, int n){
map<int,int> mp;
int c=0,f=0;
for(int i=0;i<n;i++){
  ++mp[input[i]];
}
for(auto it=mp.begin();it!=mp.end();it++){
    if(mp.find(-1*(it->first))!=mp.end()){

        auto it2 = mp.find(-1*(it->first));
        int min1=min(it->first,it2->first);
        int max1=max(it->first,it2->first);
        for(int c=0;c<it->second*it2->second;c++)
        cout<<min1<< " "<<max1<<endl;
    it->second=0;
    it2->second=0;
    }

}

}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
PairSum(a,n);
return 0;
}
