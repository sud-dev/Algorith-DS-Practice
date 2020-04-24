#include<bits/stdc++.h>
using namespace std;
int main()
{
    int order;
    cin>>order;
    int sum=0;
    int a[order][order];
    for(int row= 0;row<order;++row){
        for(int col = 0;col<order;++col){
            cin>>a[row][col];
        }
    }
        sum+=a[order-1][order-1]+a[0][0]+a[order-1][0]+a[0][order-1];
        for(int i=1;i<order-1;i++){


            sum+=a[0][i]+a[i][0]+a[i][order-1]+a[order-1][i]+a[i][i]+a[order-1-i][i];



        }
        if(order %2!=0){
        sum-=a[(order-1)/2][(order-1)/2];
        cout<<sum;
        }
        else{
            cout<<sum;
        }


    }
