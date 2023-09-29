#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        delete this->next;
        cout<<value<<" was deleted."<<endl;
    }
};
int lengthofLL(Node *&head)
{
    Node *current = head;
    int len = 0;
    while (current != NULL)
    {
        len++;
        current = current->next;
    }
    return len;
}
void printLL(Node *&tail, Node *&head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;
}
void InsertAtTail(Node *&tail, Node *&head, int d)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        tail = temp;
        head = temp;
    }
    else
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}
void InsertAtHead(Node *&tail, Node *&head, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void deleteNode(Node *&tail, Node *&head, int val)
{
    Node *previous = NULL;
    Node *current = head;
    if (val == head->data)
    {
        head = head->next;
        head->prev = current->prev;
        current->next = NULL;
        delete current;
        return;
    }

    Node *cnt_iterator = head;
    int cnt = cnt_iterator->data;

    while (cnt != val)
    {
        previous = current;
        current = current->next;
        cnt_iterator = cnt_iterator->next;
        cnt = cnt_iterator->data;
    }
    int len = lengthofLL(head);
    if (val == tail->data)
    {
        previous->next = current->next;
        current->prev = NULL;
        tail = previous;
        delete current;
        return;
    }
    current->next->prev = previous;
    previous->next = current->next;
    current->prev = NULL;
    current->next = NULL;
    delete current;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtTail(tail, head, 10);
    InsertAtTail(tail, head, 20);
    InsertAtTail(tail, head, 30);
    InsertAtTail(tail, head, 40);
    InsertAtTail(tail, head, 50);
    printLL(tail, head);

    deleteNode(tail, head, 30);
    printLL(tail, head);

    deleteNode(tail, head, 10);
    printLL(tail, head);

    deleteNode(tail, head, 50);
    printLL(tail, head);
}
