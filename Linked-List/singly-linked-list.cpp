#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        //CONSTRUCTOR
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        //DESTRUCTOR
        ~Node(){
            int value = this -> data;
            //memory free
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout<<"Memory has been freed for node with data: "<<value<<endl;
        }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    //inserting at head
    if(position==1){ 
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    //inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, int position, Node* &tail){
    //deleting first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        
        int count=1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        tail = prev;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {

    //CREATING A NEW NODE
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //POINTING HEAD TO NEW NODE
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail, 69);

    insertAtTail(tail, 12);

    insertAtPosition(tail, head, 4, 100);

    print(head);

    deleteNode(head, 4, tail);

    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    return 0;
}