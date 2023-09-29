#include <bits/stdc++.h>
using namespace std;

class Node //-------------------------------------------------------->Creating a node
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
// insert at end function
void InsertAtTail(Node *&t, Node *&h, int d) //----------------------------------------------->Function to insert at End
{
    // creating new node
    Node *temp = new Node(d);
    // if there is no initial node already present
    if (t == NULL)
    {
        t = temp;
        h = temp;
    }
    // doing main process
    t->next = temp;
    t = temp;
}
void InsertAtHead(Node *&t, Node *&h, int d) //---------------------------------------------->Function to insert at Start
{
    // creating new node to be inserted
    Node *temp = new Node(d);
    // if there is no initial node already present
    if (h == NULL)
    {
        h = temp;
        t = temp;
    }
    // perform the main thing
    temp->next = h;
    h = temp;
}

// print function
void printLL(Node *&h) //------------------------------------------------------------>Function to print the linkedlist
{
    Node *ptr = h;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

// insertion at position function
void InsertAtGivenPosition(Node *&tail, Node *&head, int pos, int d) //---------------------------->Function to insert at any position
{

    // if user sets position at 1 then we need to call InsertAtHead coz
    //  in InsertAtGivenPosition function we need a prior node to insert new Node
    if (pos == 1)
    {
        InsertAtHead(tail, head, d);
        return;
    }
    Node *temp1 = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp1 = temp1->next;
        cnt++;
    }

    Node *temp2 = new Node(d);
    temp2->next = temp1->next;
    temp1->next = temp2;

    // the InsertAtGivenPosition will have no issue to insert at the end but the tail pointer remains unupdated
    // so to update the tail pointer after adding the new node at the end do following
    if (temp2->next == NULL)
    {
        tail = tail->next;
    }
}

int main()
{

    Node *node1 = new Node(10);
    Node *tail = node1;
    Node *head = node1;

    InsertAtTail(tail, head, 12);
    InsertAtTail(tail, head, 13);
    InsertAtTail(tail, head, 14);
    InsertAtTail(tail, head, 15);
    InsertAtTail(tail, head, 16);
    InsertAtHead(tail, head, 99);
    printLL(head);
    // 10 12 13 14 15 16

    // InsertAtGivenPosition(pos,d);

    InsertAtGivenPosition(tail, head, 1, 0);
    printLL(head);
    InsertAtGivenPosition(tail, head, 8, 70);
    printLL(head);
    InsertAtTail(tail, head, 100);
    printLL(head);
    InsertAtHead(tail, head, 69);
    printLL(head);
}