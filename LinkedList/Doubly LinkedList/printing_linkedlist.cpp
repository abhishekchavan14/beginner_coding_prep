#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void InsertAtTail(Node* &tail, Node* &head, int d){
    Node* temp = new Node(d);
    if(tail==NULL){
        tail = temp;
        head = temp;
    }
    else{
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void printLL(Node* &head){
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    InsertAtTail(tail, head, 10);
    InsertAtTail(tail, head, 20);
    InsertAtTail(tail, head, 30);
    InsertAtTail(tail, head, 40);

    printLL(head);
}