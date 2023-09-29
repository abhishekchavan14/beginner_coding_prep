#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* next;
    Node* prev;
    int data;

    Node(int d){
        this->next = NULL;
        this->prev = NULL;
        this->data = d;
    }
};
class Stack
{
public:
    Node *top;

    Stack(){
        top = NULL;
    }
    void push(int d){

        Node* temp = new Node(d);
        //if empty stack
        if(top==NULL){
            top = temp;
            cout<<"Pushed: "<<top->data<<endl;
            return;
        }
        //if stack not empty
        top -> next = temp;
        temp -> prev = top;
        top = temp;
        cout<<"Pushed: "<<top->data<<endl;
        //In case of Linked List implemenation we wont encounter the STACK OVERFLOW issue
    }
    void pop(){
        //if its the last elemet
        if(top->prev == NULL){
            Node* curr = top;
            top = NULL;
            cout<<"Popped: "<<curr->data<<endl;
            delete curr;
            return;
        }
        //if stack is empty
        else if(top == NULL){
            cout<<"Stack Underloading!"<<endl;
            return;
        }
        else{
            Node* curr = top;
            top = top->prev;
            curr -> prev -> next = NULL; // as pop will be performed on rightmost node only
            curr -> prev = NULL;
            cout<<"Popped: "<<curr->data<<endl;
            delete curr;
        }
    }

    void peek(){
        //if stack is empty
        if(top==NULL){
            cout<<"Stack Empty!"<<endl;
            return;
        }
        cout<<"Top: "<<top->data<<endl;
    }
    void isEmpty(){
        if(top==NULL){
            cout<<"Yes, stack is now empty."<<endl;
        }
        else{
            cout<<"No, stack has "<<top->data<<" at the top"<<endl;
        }
    }
};

    int main()
    {
        Stack s; // top is initialized as NULL
        s.peek();

        s.push(3);
        s.peek();
    
        s.push(5);
        s.peek();
        s.isEmpty();
        s.pop();
        s.peek();
        
        s.pop();
        s.peek();
        s.isEmpty();
    }

