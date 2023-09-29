#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int s){
        this->size = s;
        arr = new int[this->size];
        front = -1;  //------------------------------------------>Important Note
        rear = -1;
    }

    void enqueue(int d){
        //Queue is empty
        if(front == -1){
            front++;
            rear ++;
            arr[rear] = d;
        }
        //Queue is full
        else if((front == 0 && rear == (size-1)) || (rear == (front-1))){
            cout<<"Queue is full!"<<endl;
        }
        //rear is at last index and need to perform circlular logic
        else if((rear == (size-1)) && front !=0){
            rear = 0;
            arr[rear] = d;
        }
        //usual condition
        else{
            rear++;
            arr[rear] = d;
        }
    }

    void dequeue(){
        //Queue is Empty
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
        }
        //Single element
        else if(front==rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        //Last element to be popped and circular logic to be performed
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        }
        //Usual condition
        else{
            arr[front] = -1;
            front++;
        }
    }

    void peek(){
        if(front == -1){
            cout<<"Queue is Empty!"<<endl;
        }
        else{
            cout<<"Front: "<<arr[front]<<endl;
        }
    }

    void isEmpty(){
        if(front==-1){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<"Not Empty"<<endl;
        }
    }
};

int main(){
    Queue q(7);
    q.isEmpty();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.isEmpty();

    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();

    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(11);
    

}