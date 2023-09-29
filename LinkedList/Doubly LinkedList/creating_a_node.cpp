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

int main(){
    Node* node1 = new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->prev<<endl;
    cout<<node1->next<<endl;
}