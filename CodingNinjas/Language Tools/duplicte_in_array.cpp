#include<bits/stdc++.h>
using namespace std;
int MissingNumber(int arr[], int size){
    //0 to n-2
       for(int i=0;i<size;i++){
       if(arr[abs(arr[i])]>=0){
        arr[abs(arr[i])]=-arr[abs(arr[i])];

       }
       else{

      return abs(arr[i]);

       }

    }

    //n(n+1)/2
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<MissingNumber(a,n);



    return 0;
}
