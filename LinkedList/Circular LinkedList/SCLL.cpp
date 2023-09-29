//singly circlular linked list

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

void InsertInCLL(Node* &tail, int inp_val, int d){
    Node* temp = new Node(d);
    Node* curr = tail;

    //if LL is empty
    if(tail==NULL){
        temp->next = temp;
        tail = temp;
    }

    else{
        while(curr->data != inp_val){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;

        tail = temp;        // doesnt matter where the tail pointer lie, it is a circular linked list
    }
}

void DeletionInCLL(Node* &tail, int val){
    Node* prev = tail;
    Node* curr = prev->next;

    //if LL has only one node
    if(curr==prev){
        tail = NULL;
        delete curr;
        return;
    }

    while(curr->data!=val){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    if(curr == tail){
        tail = prev;
    }
    delete curr;
}

void printCLL(Node* &tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* ptr = tail;
    int val = ptr->data;
    do{
        cout<<ptr->next->data<<" ";
        ptr = ptr->next;
    }while(val != ptr->data);
    cout<<endl;
}
int main(){

    Node* tail = NULL;
    InsertInCLL(tail, 69, 3);
    printCLL(tail);
    InsertInCLL(tail, 3, 5);
    printCLL(tail);
    InsertInCLL(tail, 5, 7);
    printCLL(tail);
    InsertInCLL(tail, 3, 6);
    printCLL(tail);
    DeletionInCLL(tail, 7);
    printCLL(tail);
    DeletionInCLL(tail, 3);
    printCLL(tail);
    DeletionInCLL(tail, 5);
    printCLL(tail);
    DeletionInCLL(tail, 6);
    // cout<<"tail"<<tail;
    printCLL(tail);
    InsertInCLL(tail, 69, 10);
    InsertInCLL(tail, 10, 20);
    InsertInCLL(tail, 20, 40);
    InsertInCLL(tail, 20, 30);
    InsertInCLL(tail, 40, 50);
    printCLL(tail);
}