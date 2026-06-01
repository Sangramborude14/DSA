#include <iostream>
#include <string>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int new_data) {
    this->data = new_data;
    this->next = nullptr;
  }
};

// iterative traversal of a linked list
void traverseList(Node *head) {
  while (head != nullptr) {
    cout << head->data;
    if (head->next != nullptr)
      cout << " -> ";
    head = head->next;
  }
  cout << endl;
}

// recursive tranverse
void traverseList1(Node *head) {
  if (head == nullptr) {
    cout << endl;
    return;
  }

  cout << head->data;

  if (head->next != nullptr) {
    cout << " -> ";
  }

  traverseList1(head->next);
}

// insert at front
Node *insertAtFront(Node *head, int x) {
  Node *newNode = new Node(x);
  newNode->next = head;
}

// insert at end
Node *insertAtEnd(Node *head, int x) {
  Node *newNode = new Node(x);

  if (head == nullptr) {
    return newNode;
  }

  Node *last = head;

  while (last->next != nullptr) {
    last = last->next;
  }

  last->next = newNode;

  return head;
}

// delete at beginning
Node *deleteHead(Node *head) {

  if (head == nullptr) {
    return nullptr;
  }

  Node* temp = head;

  head = head->next;
  delete temp;
  return head;
}

//delete at end
Node* removeLastNode(Node* head){
    if(head == nullptr){
        return nullptr;
    }

    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node* secondLast = head;
    while (secondLast->next->next != nullptr){
        secondLast = secondLast->next;
    }

    delete secondLast->next;
}

//reverse   
Node *reverse(Node* head){
    while(head != nullptr){
        Node *curr = head,*prev = nullptr,*next;

        while(*curr != nullptr){

            next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev
    }
}


int main() {

  Node *head = new Node(10);

  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);

  int x = 1;
  head = insertAtFront(head, x);

  traverseList(head);
  traverseList1(head);

  return 0;
}