#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,target,index=-1;
cin>>n>>target;
int a[n];
for(int i=0;i<n;i++){

    cin>>a[i];

}
    unordered_set<int> ss;
int flag=0;
string output="false";
for(int i=0;i<n;i++){
if(a[i]==0){
        output="true";
        cout<<output<<endl;
   cout<<a[i]<<" ";
}

    if(ss.find(target-a[i]) != ss.end() && (target-a[i])!=a[i]){
        flag=1;
if(output=="false"){
  cout<<"true"<<endl;
        cout<<target-a[i]<<" "<<a[i]<<" ";
        break;
}
else{

        cout<<target-a[i]<<" "<<a[i]<<" ";
        break;
}


    }
    else if(ss.find(target) != ss.end()){
        flag=1;
        cout<<"true"<<endl;
        cout<<target;
        break;

    }
    ss.insert(a[i]);

}
    if(flag==0)
        cout<<"false";
return 0;
}

