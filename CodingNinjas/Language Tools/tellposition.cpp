#include<bits/stdc++.h>
using namespace std;
int main()
{
    int noOfStudents;
    map<pair<string,int>, int> > mp;
    cin>>noOfStudents;
    int index = 0;
    while(index<noOfStudents){
      string name;int marks1, marks2, marks3, totalMarks;
        cin>>name>>marks1>>marks2>>marks3;
        int total=marks1+marks2+marks3;
        mp[{name,total}]=index;
        index++;


    }
    for ( map<pair<string,int>,int>::iterator it = mp.begin(); it != mp.end(); ++it )
{



}


	return 0;
}
