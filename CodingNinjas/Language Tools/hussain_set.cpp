#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Queue{
    public:
int front,rear,size;
int capacity;
int arr[];
 Queue(int c) {
         capacity = c;
         front = size = 0;
         rear = 0;

//         arr = new int[capacity*sizeof(int)];

    }
    int isFull(){

if(capacity==size)
    return 1;
else return 0;
    }

    int isEmpty(){

    return size==0;}

    void enqueue(int item){
        if(isFull()==1)
        {


            cout<<isFull();
            cout<<"Queue is full";
        }
        else{
           arr[rear++]=item;
           size=size+1;
        }
    }
        int deQueue(){
        if(isEmpty())
            return 0;

        else{
         int item=arr[front++];

        size--;
        return item;
        }

        }






int findfront(Queue* queue)
{
    if (isEmpty())
        return INT_MIN;
    return queue->arr[queue->front];
}

// Function to get rear of queue
int findrear(Queue* queue)
{
    if (isEmpty())
        return INT_MIN;
    return queue->arr[queue->rear];
}
};

int main()
{

Queue* queue = new Queue(100);

    queue->enqueue(10);
    queue->enqueue(20);
    queue->enqueue(30);
    queue->enqueue(40);

    cout<<queue->deQueue()<<" dequeued from queue\n";

    cout << "Front item is " << queue->findfront(queue) << endl;
    cout << "Rear item is " << queue->findrear(queue) << endl;

return 0;
}
