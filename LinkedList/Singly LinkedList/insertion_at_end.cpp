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

//print function
    void printLL(Node* &h){
        while(h != NULL){
            cout<<h->data<<" ";
            h = h->next;
        }
        cout<<endl;
    }

// insert at end function
    void InsertAtTail(Node* &t,Node* &h, int d ){
        //creating new node
        Node* temp = new Node(d);
        //if there is no initial node already present
        if(t == NULL){
            t = temp;
            h = temp;
        }
        //doing main process
        t->next = temp;
        t = temp;
    }

int main(){

    //in case of insertion at tail we need to have an initial object otherwise the "t->next" wont know which object's next we are talking about 
    // Node* node1 = new Node(10);

    // Node* tail = node1;
    // Node* head = node1;
    Node* head = NULL;
    Node* tail = NULL;

    InsertAtTail(tail, head,12);
    InsertAtTail(tail,head,13);
    InsertAtTail(tail,head,14);

    printLL(head);

}