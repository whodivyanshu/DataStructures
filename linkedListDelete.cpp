#include<iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;
    Node(int data){
        this->data  = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data"<< value<<endl;
    }
};
void InsertAtHead(Node *&head, int data) {
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void deleteNode(int position, Node* &head){
    if (position == 1)  
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;

        }
        prev->next = curr->next;
        curr ->next = NULL;
        delete curr;
    }
    
    
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main(){
    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 34);
    InsertAtHead(head, 12);
    InsertAtHead(head, 45);
    InsertAtHead(head, 23);
    InsertAtHead(head, 13);
    deleteNode(3, head);
    print(head);





    return 0;
}