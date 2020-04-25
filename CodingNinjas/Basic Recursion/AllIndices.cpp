int counter=-1;
int index=0;
int allIndexes(int input[], int size, int x, int output[]) {
   counter++;
if(size<0)
    return index;

if(input[0]==x) {

        //cout<<index<<counter<<endl;
//cout<<output[index]<<endl;
        output[index++]=counter;
    //return  counter;

}
return allIndexes(input+1,size-1,x, output);

}
