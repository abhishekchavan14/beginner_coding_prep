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
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtHead(tail, head , 10);
    InsertAtHead(tail, head , 20);
    InsertAtHead(tail, head , 30);

    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    cout<<tail->data<<endl;
}