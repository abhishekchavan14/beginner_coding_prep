#include<bits/stdc++.h>
using namespace std;

class Queue{

    public:
    int *arr ;
    int size;
    int front;
    int rear;

    Queue(int s){
        this->size = s;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int d){
        //if queue is full
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = d;
            rear++;
        }
    }
 
    void dequeue(){
        if(front==rear){
            //queue is empty
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }
    void peek(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Front: "<<arr[front]<<endl;
        }
    }
    void isEmpty(){
        if(front == rear){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<"Not empty"<<endl;
        }
    }
    void sizeofqueue(){
        cout<<"Size: "<<rear-front<<endl;
    }
};

int main(){

    Queue q(7);
    q.sizeofqueue();

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);

    q.sizeofqueue();

    q.peek();
    q.isEmpty();
    q.dequeue();
    q.peek();
    q.sizeofqueue();
    q.dequeue();
    q.dequeue();
    q.peek();
    q.sizeofqueue();
    q.isEmpty();

}