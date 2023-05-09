#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed for node with data: "<<this->data<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp->next = head; 
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* &tail, int d){

    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position==1){
        insertAtHead(head, tail, d);
        return;
    }
    
    Node* temp = head;
    int count=1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void deleteNode(int position, Node* &head, Node* &tail){
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* previous = NULL;

        int count = 1;
        while(count<position){
            previous = curr;
            curr = curr -> next;
            count++;
        }

        curr->prev = NULL;
        previous->next = curr->next;
        curr->next = NULL;
        
        delete curr;
    }
}

int main(){
    
    // Node* node1 = new Node(11);
    Node* head = NULL;
    Node* tail = NULL;

    // print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head, tail, 10);

    insertAtTail(head, tail, 12);
    insertAtTail(head, tail, 13);
    insertAtTail(head, tail, 14);

    print(head);

    insertAtPosition(tail, head, 3, 100);

    print(head);

    insertAtPosition(tail, head, 6, 101);

    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    deleteNode(1, head, tail);

    print(head);

    deleteNode(3, head, tail);

    print(head);

    return 0;
}