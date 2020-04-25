int sol[20][20];

bool Path(int maze[20][20],int row,int column,int n){

    if(maze[row][column]==1 && row>=0 && column>=0 && row<n && column<n && sol[row][column]==0)
        return true;
    
return false;
    
}
void Maze(int maze[20][20], int n,int row,int col){
    
    
    if(row==n-1 && col==n-1){
      //print sol matrix
        sol[row][col]=1;
       for(int i=0; i<n;i++){
           
           for(int j=0;j<n;j++){
               cout<<sol[i][j]<<" ";
           }
       }
        cout<<endl;
        return;  
    }

    if(Path(maze,row,col,n)){
        
        sol[row][col]=1;
         //move down
        Maze(maze,n,row+1,col);
          // move left
        Maze(maze,n,row,col-1);
        //move up
        Maze(maze,n,row-1,col);
        //move right
        Maze(maze,n,row,col+1);
     
        sol[row][col]=0;
        
        
    }
    
    return;
    
    
}

void ratInAMaze(int maze[][20], int n){

Maze(maze,n,0,0);


}
