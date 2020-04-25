int counter=-1;
int firstIndex(int input[], int size, int x) {
    counter++;
if(size<0)
    return -1;

if(input[0]==x)
    return  counter;


return firstIndex(input+1,size-1,x);

}
