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
};
int lengthofLL(Node* &head){
    Node* current = head;
    int len = 0;
    while(current!=NULL){
        len++;
        current=current->next;
    }
    return len;
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

void deleteNode(Node* &tail,Node *&head, int pos)
{
    Node *previous = NULL;
    Node *current = head;
    if (pos == 1)
    {
        head = head->next;
        head->prev = current->prev;
        current->next = NULL;
        delete current;
        return;
    }

    int cnt = 1;
    // int len = 1;
    while (cnt < pos)
    {
        previous = current;
        current = current->next;

        cnt++;
        // len++;
    }
    int len = lengthofLL(head);
    if(pos==len){
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
    printLL(head);

    deleteNode(tail,head, 3);
    printLL(head);
    
    deleteNode(tail,head, 1);
    printLL(head);
    
    deleteNode(tail,head, 3);
    printLL(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

}
