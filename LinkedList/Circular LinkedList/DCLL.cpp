#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertInDCLL(Node *&tail, int val_to_traverse, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        tail = temp;
        return;
    }
    Node *curr = tail;
    while(curr->data != val_to_traverse){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next ->prev = temp;
    curr->next = temp;
    temp->prev = curr;
    tail = temp;
}

void DeletionInDCLL(Node* &tail, int val){
    Node* previous = tail;
    Node* current = previous->next;
    while(current->data != val){
        previous = current;
        current = current->next;
    }
    if(current==previous){
        tail = NULL;
        current->next = NULL;
        current->prev = NULL;
        delete current;
        return;
    }

    previous->next = current->next;
    current->next->prev = previous;
    current->next = NULL;
    current->prev = NULL;
    if(current==tail){
        tail = previous;
    }
    delete current;
}

void printDCLL(Node* &tail){
    Node* ptr = tail;
    if(tail == NULL){
        cout<<"List is empty" <<endl;
        return;
    }
    int val = ptr->data;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr->data!=val);
    cout<<endl;
}
int main()
{
    Node* tail = NULL;
    InsertInDCLL(tail, 69, 3);
    printDCLL(tail);
    InsertInDCLL(tail, 3, 4);
    printDCLL(tail);
    InsertInDCLL(tail, 4, 5);
    printDCLL(tail);
    InsertInDCLL(tail, 3, 7);
    printDCLL(tail);
    DeletionInDCLL(tail, 5);
    printDCLL(tail);
    DeletionInDCLL(tail, 3);
    DeletionInDCLL(tail, 7);
    DeletionInDCLL(tail, 4);
    printDCLL(tail);
}