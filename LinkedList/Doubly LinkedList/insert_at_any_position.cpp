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
void printLL(Node* &head){
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
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
void InsertAtHead(Node* &tail, Node* &head, int d){
    Node* temp = new Node(d);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtGivenPosition(Node* &tail, Node* &head, int pos, int d){

    Node* temp = new Node(d);
    if(pos==1){
        InsertAtHead(tail, head, d);
        return;
    }
    Node* previous = NULL;
    Node* current = head;

    int cnt = 1;
    while(cnt<pos){
        previous = current;
        current = current->next;
        cnt++;
    }
    if(current == NULL){
        InsertAtTail(tail, head, d);
        return;
    }
    current->prev = temp;
    temp->next = current;
    temp->prev = previous;
    previous->next = temp;
}



int main(){

    Node* head = NULL;
    Node* tail = NULL;

    InsertAtGivenPosition(tail, head, 1, 10);
    InsertAtGivenPosition(tail, head, 2, 20);
    InsertAtGivenPosition(tail, head, 3, 30);
    InsertAtGivenPosition(tail, head, 4, 40);
    InsertAtGivenPosition(tail, head, 5, 50);
    printLL(head);

    InsertAtGivenPosition(tail, head, 1,100);
    InsertAtGivenPosition(tail, head, 7, 100);
    printLL(head);

}