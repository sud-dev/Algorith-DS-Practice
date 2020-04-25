#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--){
      int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
      int slowPtr=0,fastPtr=1,temp,flag=0;
        while(slowPtr<n && fastPtr<n){
            if(a[slowPtr]-a[fastPtr]==1){
                temp=a[slowPtr];
                a[slowPtr]=a[fastPtr];
                a[fastPtr]=temp;
                slowPtr+=2;
                fastPtr+=2;
            }
            else{
                fastPtr++;
                slowPtr++;
            }
        }
        for(int i=0;i<n;i++){
     if(a[i]==i){
     flag=1;
     }
            else { flag=0;
                  break;
            }

        }
    if(flag==1){
        cout<<"Yes"<<endl;
    }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}
