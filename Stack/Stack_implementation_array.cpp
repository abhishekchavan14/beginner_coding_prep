#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *arr; //------------------------------->the array on which stack is implemented
        int size; //------------------------------->size of that array
        int top; //-------------------------------->an index to point the top element in the stack (used for traversing)

    //constructor
    Stack(int size){
        this->size = size;
        this->arr = new int [size];
        this->top = -1;
    }
     ~Stack() {
        delete[] arr; //---------------------------> Free the dynamically allocated array when the object is destroyed
    }

    void push(int val){
        if(top==(size-1)){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(top<0){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    void peek(){
        if(top<0){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<"Top : "<<arr[top]<<endl;
    }

    bool isEmpty(){
        if(top<0){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack s(4);
    s.peek();
    cout<<s.isEmpty()<<endl;

    s.push(20);
    s.peek();
    s.push(30);
    s.peek();
    s.push(40);
    s.peek();
    s.push(50);
    s.peek();
    s.push(50);
    cout<<s.isEmpty()<<endl;

    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop(); 
    s.peek();
    cout<<s.isEmpty()<<endl;
}