#include <bits/stdc++.h>
using namespace std;

int main()
{ int n,k,x,mn,mx;
 cin>>n>>k>>x;
 int a[n];
 int *countNo=new int[1025]();

 for(int i=0;i<n;i++){
     cin>>a[i];
     countNo[a[i]]++;
     
 }
   for(int j=0;j<k;j++){
       int prev=-1;
        int *storeNo=new int[1025]();
 for(int i=0;i<=1025;i++){
  
    if(countNo[i]%2==0){
        storeNo[i^x]+=countNo[i]/2; 
         storeNo[i]+=countNo[i]/2;
     }
     else{
         if(prev%2!=0){
        storeNo[i^x]+=(countNo[i]/2)+1; 
         storeNo[i]+=(countNo[i]/2);
         }
         else{
                 storeNo[i^x]+=(countNo[i]/2); 
         storeNo[i]+=(countNo[i]/2)+1;    
         }
     }
        prev+=countNo[i];
     }
 
       delete[] countNo;
       countNo=storeNo;
   }
for(int i=0;i<=1025;i++) {
    if(countNo[i]>0){
        mn=i;
        break;
    }
}
for(int i=1025;i>=0;i--){
    if(countNo[i]>0){
        mx=i;
        break;
    }
} 
//delete[] countNo;
//delete[] countNo;
//delete[] a;
 cout<<mx<<" "<<mn<<endl;
    return 0;
}
