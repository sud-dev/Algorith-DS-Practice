bool checkNumber(int input[], int size, int x) {
if(size<=0)
    return false;

bool smallOutput=checkNumber(input,size-1,x);

if(!smallOutput){
    if(input[size]==x)
      return true;
      else
        return false;
}

else {


    return true;
}

}
