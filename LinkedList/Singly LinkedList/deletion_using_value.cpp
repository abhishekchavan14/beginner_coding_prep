#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor -----------------------------------------------------> We can write our own destructor which will be called when 
    //                                                                  we perfrom "delete pointername"
    //                                                                  If we dont declare our version of destructo the the default
    //                                                                  destrcutor will be called which will perform the same deletion of pointer.
    ~Node(){
        int value = this->data;
        delete this->next;
        cout<<value<<" was deleted."<<endl;
    }
};

void deleteNode(Node* &tail,Node* &head, int val){
    Node* prev = NULL;
    Node* curr = head;

    //Calculate position of val 



     //what if pos = 1
    if(val==head->data){
        head = head->next;
        curr->next = NULL;
        delete curr;
        return;
    }

    //for middle and last node deletion
    Node* cnt_iterator = head;
    int cnt = cnt_iterator->data;
    while(cnt!=val){
        prev = curr;
        curr = curr->next;
        cnt_iterator = cnt_iterator->next;
        cnt = cnt_iterator->data;
    }

    prev->next = curr->next;
    curr->next = NULL;
     if(curr == tail){
            tail = prev;
        }
    delete curr;
    
}

void printLL(Node* &tail, Node* &head){
    Node* ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    cout<<endl;
}

void InsertAtHead(Node* &tail, Node* &head, int d){
    Node* temp = new Node(d);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
    temp->next = head;
    head = temp;
    }
}
int main(){
    
    Node* head = NULL;
    Node* tail = NULL;
    InsertAtHead(tail,head, 10);
    InsertAtHead(tail,head, 20);
    InsertAtHead(tail,head, 30);
    InsertAtHead(tail,head, 40);
    InsertAtHead(tail,head, 50);

    printLL(tail,head);

    deleteNode(tail,head, 10);
    printLL(tail,head);
    
    deleteNode(tail,head, 30);
    printLL(tail,head);
    
    deleteNode(tail,head, 50);
    printLL(tail,head);
    
}