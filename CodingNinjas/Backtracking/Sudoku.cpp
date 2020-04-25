bool emptyPos(int board[][9],int &row,int &col){
    for(row=0;row<9;row++){
        for(col=0;col<9;col++){
     if(board[row][col]==0){
      return true;
  }    
        }
    }

  return false;  
    
}

bool checkNo(int board[][9],int row,int col,int no){
int flag1=0,flag2=0,boxStart,boxEnd;
    for(int i=0;i<9;i++){
       
           if(board[row][i]==no || board[i][col]==no){
               flag1=1;
               break;
           }
       }

  boxStart =row-(row%3); 
    boxEnd=col-(col%3);
    
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
        
        if(board[i+boxStart][j+boxEnd]==no){
            flag2=1;
            break;
        }
        
    }
}
    if((flag1==1 || flag2==1 ) )
        return false;
    else 
        return true;
}


bool helper(int board[][9],int row,int col){
    if(!emptyPos(board,row,col)){
        return true;
    }
for (int num = 1; num <= 9; num++)  
    { 
     if(checkNo(board,row,col,num) ){
        board[row][col]=num; 
        if(helper(board,row,col))
            return true;
        board[row][col]=0;
     }  } 
    /*else if(checkNo(board,row,col,no++) && no<=9){
        board[row][col]=no; 
        if(helper(board,row,col,1))
            return true;
        board[row][col]=0;
            
        }
        */

    return false;
}
bool sudokuSolver(int board[][9]){
int r=0,c=0;
  return  helper(board,r,c);


}
