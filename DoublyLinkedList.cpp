#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data= d;
        this->next= NULL;
        this->prev= NULL;
    }
};



void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;

}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    temp-> prev = tail;
    tail = temp;
}

void insertAtPosition(int position, Node* & tail, Node* & head, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode -> next = temp-> next;
     temp->next -> prev = newNode;
     temp->next = newNode;
     newNode-> prev = temp;



}
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!= NULL){
        len++;
        temp = temp->next;

    }
    return len;
}

int main(){
    Node* node1 = new Node(8);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 45);
    insertAtTail(tail, 25);
    insertAtPosition(2,tail,head,34);

    print(head);



    return 0;
}