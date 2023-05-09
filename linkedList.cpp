#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void InsertAtHead(Node *&head, int data) {
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void InsertAtTail(Node *&tail, int data) {
  Node *temp = new Node(data);
  tail->next = temp;
  tail = tail->next;
}

void InsertAtMiddle(Node *&head, int position, int data) {
  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1) {
    temp = temp->next;
    cnt++;
  }
  Node *newNode = new Node(data);
  newNode->next = temp->next;
  temp->next = newNode;
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *node1 = new Node(3);

  Node *tail = node1;
  Node *head = node1;
  InsertAtHead(head, 7);
  InsertAtTail(tail, 12);
  InsertAtTail(tail, 78);
  InsertAtTail(tail, 23);
  InsertAtMiddle(head, 4, 32);

  print(head);

  return 0;
}