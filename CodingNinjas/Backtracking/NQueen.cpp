#include <bits/stdc++.h>
 int output[10][10];
bool isPossible(int n, int row,int column){
    //check for 1 in upper same column 
for(int i=row-1;i>=0;i--){
   if(output[i][column]==1){
       return false;
   }
}  
  //check for left diagonal  
for(int i=row-1,j=column-1;i>=0,j>=0;i--,j--) {
     if(output[i][j]==1){
       return false;
   }  
}
    
    //check for right diagonal
    for(int i=row-1,j=column+1;i>=0,j<n;i--,j++){
    if(output[i][j]==1){
       return false;
   }   
    }
    
    return true;
}
void Queens(int n,int row){
   if(row==n)
   {
       //print matrix
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               cout<<output[i][j]<<" ";
           }
       }
       cout<<endl;
       return;
   }
    
    for(int j=0; j<n;j++){
        
        if(isPossible(n,row,j)){
        output[row][j]=1;
        Queens(n,row+1);
        output[row][j]=0 ;  
        }       
    }
  
}


void placeNQueens(int n){ 
memset(output, 0, sizeof(output[0][0]) * n * n);
 Queens(n,0);

}
