#include<iostream>
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


int main(){

    //Initial node
    Node* node1 = new Node(10);

    //storing address of initial node in head pointer
    Node* head = node1;
    //either create the inital node 
    //OR
    //declare head as NULL as follows:
    //Node* head = NULL;

    cout<<head<<endl;   //------------------------------>address of node with value 10
    
    //calling insert function
    InsertAtHead(head, 12);
    
    //checking if it worked
    cout<<head->data<<endl;
    cout<<head->next<<endl;   //----->this will point to the address of node with value 10 , this means that 12 is added successfully before 10
    
}

