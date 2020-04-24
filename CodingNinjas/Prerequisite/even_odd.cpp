#include<bits/stdc++.h>
using namespace std;

int main(){

long long  n;
long long  a[100000];
long long sEven=0,sOdd=0;
cin>>n;
for(int i=0; i <n;i++){

    cin>>a[i];
    if((a[i]%2==0) && i%2==0){
sEven+=a[i];


    }
    else if((a[i]%2!=0) && i%2!=0)
sOdd+=a[i];
}

cout<<sEven<<" "<<sOdd<<endl;




    return 0;
}
