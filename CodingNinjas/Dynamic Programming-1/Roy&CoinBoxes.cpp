#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q;
    cin>>n>>m;
    int l[m],r[m]; 
    int *start=new int [n+1]();
    int *end=new int [n+1]();
 for(int i=0;i<m;i++){
     cin>>l[i]>>r[i];
     start[l[i]]++;
	 end[r[i]]++;
 }
    cin>>q;
    int x[q];
    for(int i=0;i<q;i++){
        cin>>x[i];
    }
    int *boxes=new int[n+1]();
    //maxRight=maxLeft=INT_MIN;
    boxes[1]=start[1];
    
    for(int i=2;i<=n;i++){
boxes[i]+=start[i]-end[i-1]+boxes[i-1];
       
       
    }
    delete [] start;
    delete [] end;
    int *exactCount=new int[n+1]();
    for(int i=1;i<=n;i++){
       // cout<<boxes[i]<<" ";
		++exactCount[boxes[i]];
       //cout<<exactCount[boxes[i]]<<endl;
    }
    int *atLeastCount=new int[n+1]();
    atLeastCount[n]=exactCount[n];
   // cout<< atLeastCount[n]<<endl;
        for(int i=n-1;i>=0;i--){
		 atLeastCount[i]=atLeastCount[i+1]+exactCount[i];
           // cout<<atLeastCount[i]<<endl;
    }
    for(int i=0;i<q;i++){
     cout<<atLeastCount[x[i]]<<endl;
    }
    return 0;
}
