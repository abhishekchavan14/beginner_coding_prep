#include <bits/stdc++.h>
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

// insert at start
// 20|next  10|next
void InsertAtHead(Node *&t, Node *&h, int d)
{
    Node *temp = new Node(d);
    // if there is no initial node already present
    if (h == NULL)
    {
        h = temp;
        t = temp;
    }
    temp->next = h;
    h = temp;
}

// insert at end
// 20 10|next  30|next
void InsertAtTail(Node *&t, Node *&h, int d)
{
    Node *temp = new Node(d);
    // if there is no initial node already present
    if (h == NULL)
    {
        h = temp;
        t = temp;
    }
    t->next = temp;
    t = temp;
}
void InsertAtGivenPosition(Node *&tail, Node *&head, int pos, int d)
{

    if (pos == 1)
    {
        InsertAtHead(tail, head, d);
        return;
    }
    Node *temp1 = head;
    Node *temp = new Node(d);

    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp1 = temp1->next;
        cnt++;
    }
    temp->next = temp1->next;
    temp1->next = temp;

    if (temp->next == NULL)
    {
        tail = tail->next;
    }
}
void printLL(Node *&head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    InsertAtTail(tail, head, 20);
    InsertAtTail(tail, head, 30);
    InsertAtTail(tail, head, 40);
    InsertAtTail(tail, head, 50);

    InsertAtGivenPosition(tail, head, 6, 99);
    InsertAtGivenPosition(tail, head, 1, 99);
    InsertAtTail(tail, head, 100);
    InsertAtHead(head, head, 100);
    printLL(head);
}