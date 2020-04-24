#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
int a1[n],a2[n];
for (int i=0;i<n;i++){
cin>>a1[i];
}
for (int i=0;i<n;i++){
cin>>a2[i];
}
sort(a1,a1+n);
sort(a2,a2+n);
int curr_max;
int count_max=0;

for(int i=0;i<n;i++){
    curr_max=0;
    int j=0;
    while( j<n){
        if(a1[i] >=a2[j])

        curr_max++;
        j++;
    }
    if((i- curr_max+1) >count_max)
        count_max=(i- curr_max+1);
}

cout<<count_max<<endl;


    return 0;
}
