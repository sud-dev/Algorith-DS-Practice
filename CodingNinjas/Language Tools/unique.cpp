#include<bits/stdc++.h>
using namespace std;
int FindUnique(int arr[], int size){
    int xorSum = 0;
    for(int index = 0;index<size;++index){
        xorSum = arr[index]^xorSum;
        cout<<xorSum<<endl;
    }
    return xorSum;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
//cout<<(7 ^ 3 ^ 5 ^ 4 ^ 5 ^ 3 ^ 4);
cout<<"final"<<FindUnique(a,n);



return 0;
}
