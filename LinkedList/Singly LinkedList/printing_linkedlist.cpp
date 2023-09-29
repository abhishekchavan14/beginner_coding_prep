#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

//insert function
void InsertAtHead (Node* &h, int d){
    //creating new node to be inserted
    Node* temp = new Node(d);

    //perform the main thing
    temp->next = h;
    h = temp;
}

//print function
    void printLL(Node* &h){
        while(h != NULL){
            cout<<h->data<<" ";
            h = h->next;
        }
        cout<<endl;
    }


int main(){

    //storing address of initial node in head pointer
    Node* head =  NULL;  

    //calling insert function
    InsertAtHead(head, 12);
    printLL(head);

    InsertAtHead(head, 13);
    printLL(head);

    InsertAtHead(head, 14);
    InsertAtHead(head, 15);
    printLL(head);

    InsertAtHead(head, 16);
    printLL(head);


}