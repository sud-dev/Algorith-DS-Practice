#include<iostream>
using namespace std;
#define int long long
int solve(int x,int n){
  if(n==0)
      return 1;
  else if(x==0)
      return 0;
    if(n%2==0)
   return solve(x,n/2)*solve(x,n/2); 
    else 
        return solve(x,n/2)*solve(x,n/2)*x;
    
    
    
}
int32_t main() {
	// Write your code here
    int x,n;
    cin>>x;
    cin>>n;
	cout<<solve(x,n);
    return 0;
}
