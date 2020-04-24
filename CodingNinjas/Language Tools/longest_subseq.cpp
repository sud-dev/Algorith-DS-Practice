#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *a, int n){

 vector<int> res;
    unordered_set<int> ss;
    int ans = 0;
    int index=0;

    // Hash all the array elements
    for (int i = 0; i < n; i++)
        ss.insert(a[i]);

  for(int i=0;i<n;i++){

      if(ss.find(a[i]-1) == ss.end() ){


          int j=a[i];
          //cout<<"1"<<index<< " "<<j<<endl;
          while(ss.find(j)!=ss.end()){

              j++;
            //  cout<<"J:"<<j<<endl;
          }
          if(j-a[i] > ans){
               ans=j-a[i];
              index=a[i];
                  // cout<<"2"<<ans<< " "<<index<<endl;
          }

      }
  }



 for(int i=index;i<(index+ans);i++){
    res.push_back(i);
 }
 return res;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
vector<int> v=longestConsecutiveIncreasingSequence(a,n);
for (auto ir = v.rbegin(); ir != v.rend(); ++ir){
        cout << *ir << " ";


}
cout<<endl;
return 0;



}
