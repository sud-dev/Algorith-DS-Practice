#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    map<string,int> mp;
    getline(cin,str);
    int start=0;
    int end =0;
    str+=" ";
    cout<<str.length();

    for(int i=0;i<str.length();i++){

        if(str[i]==' '){

            //cout<<str.substr(start,i-start)<<endl;
            //cout<<start<<i<<endl;
            ++mp[str.substr(start,i-start)];
            start=i+1;

            //end=i-1;
        }
    }
    bool flag=true;
    for(auto iter = mp.begin();iter!=mp.end();++iter){
            if(iter->second>1)
            {
            cout << iter->first<<" "<< iter->second <<endl;
            flag=false;
            }
    }
       if(flag){
        cout<<-1<<endl;
    }


    return 0;
}

