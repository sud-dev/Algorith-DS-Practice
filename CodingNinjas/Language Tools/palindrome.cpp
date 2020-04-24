#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

char geto(int i){
return (char)(i+97);
}
void printPalindrome(string s){
map<char,vector<int> > mp;
for(int i=0;i<s.length();i++){
    mp[s[i]].push_back(i);

}
int odd_count=0;
for(int i=0;i<26;i++){

    if((mp[geto(i)].size())%2 !=0){

        odd_count++;
    }
}
    if(odd_count >=2){
        cout<<-1;
        return;
    }
    int ans[s.length()];
    int start=0;
    int end=s.length()-1;
    for (int i=0;i<26;i++){
            char current_char=geto(i);
            for(int j=0;j<mp[current_char].size();j+=2){

        if((mp[current_char].size() - j )==1){
            ans[s.length()/2]=mp[current_char][j];
            continue;
        }
        ans[start]=mp[current_char][j];
   ans[end]=mp[current_char][j+1];
   start++;
   end--;


    }
    }
    for(int i=0;i<s.length();i++){

        cout<<ans[i]+1<<" ";
    }

}
int main(){
    int t;
    cin>>t;
    while (t--){
            string s;
        cin>>s;
    printPalindrome(s);
    cout<<endl;

    }


    return 0;
}
