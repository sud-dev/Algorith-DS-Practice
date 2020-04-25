#include<bits/stdc++.h>
using namespace std;

bool findEmptyPos(char crossword[10][10],int &row,int &col ,string word){
int flag=0;
  for(;row<10;row++){
      for(;col<10;col++){
          if(crossword[row][col]=='-' || crossword[row][col]==word[0] ){
                cout<<row<<" "<<col<<endl;
                flag=1;
                break;

          }

      }
      if(flag==1)
            break;
  }
  if(col<10){
    if(crossword[row][col+1]=='-')
    ++col;
  }
   if(row<10){
    if(crossword[row+1][col]=='-')
    ++row;
  }
  if(flag==1)
return true;
else
    return false;
}

bool isSafe(char crossword[10][10],int r,int c,string word){
    //check in row
    int n=1;
    int i=r+1,j=c+1;
    char arr[10];
    int counter=0;
    //cout<<r<<" "<<c;
        char temp=crossword[r][c];
    if(crossword[r][c]=='-'){
       crossword[r][c]=word[0];
    }

   // cout<<crossword[r][c]<<endl;
    while((crossword[r][j]=='-' || crossword[r][j]==word[n]) && n<word.length() && j<10 && (crossword[r][c-1]=='+' || c==0) ){
       cout<<"Row"<<j<<" "<<crossword[r][j]<<" "<<r<<" "<<word[n]<<endl;
       arr[counter++]=crossword[r][j];
        crossword[r][j++]=word[n++];
    }
    counter=0;
    if(n==word.length() && (crossword[r][j]=='+' || j>9)){
        return true;
    }
    else {
             // reset row data
     for(int column=c+1;column<j;column++){
     crossword[r][column]=arr[counter++];
    cout<<"2"<<" "<<r<<" "<<column<<" "<<j<<endl;
 }
    }




    //check in column
    n=1;
    counter=0;
//crossword[r][c]=word[0];
    while((crossword[i][c]=='-' || crossword[i][c]==word[n]) && n<word.length() && i<10 && (crossword[r-1][c]=='+' || r==0)){

       // cout<<"Col"<<i<<" "<<crossword[i][c]<<" "<<c<<" "<<word[n]<<endl;
       arr[counter++]=crossword[i][c];
crossword[i++][c]=word[n++];


    }
    counter=0;
        if(n==word.length() && (crossword[i][c]=='+' || i>9 )){
        return true;
    }
    else{
            //reset column data

    crossword[r][c]=temp;
 for(int row=r+1;row<i;row++){
     crossword[row][c]=arr[counter++];
     cout<<"1"<<" "<<row<<" "<<c<<" "<<i<<endl;
 }



    }

 /*   if(( (j-c)==word.length() && crossword[r][j]=='+' ) || ( (i-r)==word.length() && crossword[i][c]=='+' )){
        return true;
    } */
  /*  if((j-c)==word.length()){
        if(j==10){
            return true;
        }
        else if(crossword[r][j]=='+') {
          return true;
        }
    }
    if((i-r)==word.length()){
        if(i==10){
            return true;
        }
        else if(crossword[i][c]=='+') {
          return true;
        }
    }


 */
     for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
          cout<<crossword[i][j];

      }
      cout<<endl;
      }
      cout<<endl;

return false;

}
void reset(char crossword[10][10],int row,int col,string word){
    int n=0;
    for(int i=col;i<10,n<word.length();i++ ){
        if(crossword[row][i]==word[n++]){
           crossword[row][i]='-';
           cout<<row<<" "<<i<<" "<<word[n]<<endl;
        }
    }
    n=0;
       for(int i=row;i<10,n<word.length();i++ ){
        if(crossword[i][col]==word[n++]){
           crossword[i][col]='-';
              cout<<i<<" "<<col<<" "<<word[n]<<endl;
        }
    }


}

bool solve(char crossword[10][10], int index,vector<string> names){

    //int row,col;
//cout<<index<<" "<<names[index]<<endl;
   if(index==names.size()) {
      for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
          cout<<crossword[i][j];

      }
      cout<<endl;
      }
       return true;
   }
  // cout<<row<<" "<<col<<endl;
      for(int row=0;row<10;row++){
      for(int col=0;col<10;col++){
if(crossword[row][col]=='-' || crossword[row][col]==names[index][0]){
cout<<"X"<<row<<" "<<col<<" "<<names[index]<<endl;
if(isSafe(crossword,row,col,names[index]) ){
cout<<"Y"<<row<<" "<<col<<" "<<names[index]<<endl;
  if(solve(crossword,index+1,names)){
      return true;
  }
reset(crossword,row,col,names[index]);
}
}

      }
}

return false;
}
int main(){
   char crossword[10][10];
    string str;
    vector<string> names;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>crossword[i][j];
        }
    }
    cin>>str;
    int start=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==';' ||str[i]=='\0'){
            names.push_back(str.substr(start,i-start));
            start=i+1;
        }
    }
    names.push_back(str.substr(start,str.length()-start));
    for(auto i:names){
        cout<<i<<endl;
    }
 solve(crossword,0,names);



 return 0;
}
