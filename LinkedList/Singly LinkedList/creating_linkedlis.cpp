#include <iostream>
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

int main()
{
    // Node node1(10); ----> static

    Node* node1 = new Node(10);  // ----->dynamic

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
}


/*
___________________
|  10   |  NULL    |
|       |          |
____________________

*/