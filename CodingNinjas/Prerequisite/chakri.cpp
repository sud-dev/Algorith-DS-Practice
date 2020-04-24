#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,max_diff=-1;
    cin>>n;
    int price[n];
    int maxPrice[n];

    for(int i=0;i<n;i++){
        cin>>price[i];


    }
    maxPrice[n-1]=price[n-1];
    for(int i=n-2;i>=0;i--){
        maxPrice[i]=max(maxPrice[i+1],price[i]);

    }

    for(int i=0;i<n;i++){

        if(max_diff<maxPrice[i]-price[i]){
            max_diff=maxPrice[i]-price[i];
        }
    }
    cout<<max_diff<<endl;

    return 0;


}
