#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

};
class Queue{
    public:
    Node* front;
    Node* rear;

    Queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int d){
        Node* temp = new Node(d);
        if(front == NULL){
            front = temp;
            rear = temp;
        }
        else{
            rear->next = temp;
            rear = rear->next;
        }
    }

    void dequeue(){
        Node* curr = front;
        if(front == rear){
            front = NULL;
            rear = NULL;
            delete curr;
        }
        else{
            curr = front;
            front = front ->next;
            curr->next = NULL;
            delete curr;
        }
    }

    void isEmpty(){
        if(front == NULL){
            cout<<"Queue is Empty!"<<endl;
        }
        else{
            cout<<"Queue is not Empty"<<endl;
        }
    }

    void peek(){
        if(front!=NULL){
            cout<<"Front: "<<front->data<<endl;
        }
        else{
            cout<<"Queue is Empty!"<<endl;
        }
    }
    void size(){
        int count = 0;
        Node* counter = front;
        while(counter!=rear){
            count++;
            counter = counter->next;
        }
        if(counter!=NULL){
        cout<<"Size: "<<count+1<<endl;
        }
        else{
            cout<<"Size: "<<count<<endl;
        }
    }
};

int main(){

    Queue q;
    q.isEmpty();
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.size();
    q.isEmpty();
    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.isEmpty();
    q.size();
    q.peek();
}