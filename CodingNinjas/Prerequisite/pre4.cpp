#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n;
cin>>n;
long long a[n];

for(int i=0;i<n;i++){

        cin>>a[i];
}
for (int i=0;i<n/2;i++){
    cout<<(a[i]+a[n-i-1])/10<<" "<<(a[i]+a[n-i-1])%10<<endl;

}


return 0;

}
