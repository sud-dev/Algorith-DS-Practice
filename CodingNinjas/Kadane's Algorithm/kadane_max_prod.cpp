#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int maxProdSubArray(int a[],int n){

int max_end_here=1;
int min_end_here=1;
int max_so_Far=0;
int temp;

for(int i=0;i<n;i++){
        if (a[i]==0){
          max_end_here=1;
           min_end_here =1;

        }
        else if(a[i]<0){
             temp=max_end_here;
            max_end_here=max(1,min_end_here*a[i]);
            min_end_here=temp*a[i];
        }
        else if(a[i]>0){
            max_end_here=max_end_here*a[i];
            min_end_here=min(1,min_end_here*a[i]) ;


        }
        max_so_Far=max(max_so_Far,max_end_here);

}
       return max_so_Far;


}


int main()
{
int n;
cin>>n;
int a[n];
for(int i=0 ; i<n;i++){

    cin>>a[i];
}
cout<<maxProdSubArray(a,n)<<endl;

return 0;
}
