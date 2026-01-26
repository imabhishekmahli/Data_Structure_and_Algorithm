#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void insertAtBeginning(Node* &head, int value)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}

void insertAtEnd(Node* &head, int value)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  if(head == NULL)
  {
    head = newNode;
    return;
  }
  Node* temp = head;
  while(temp->next !=NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

void printLL(Node* n)
{
  while(n!=NULL)
  {
    cout<<n->data<<"->";
    n=n->next;
  }
  cout<<"NULL"<<endl;
}
int main()
{
  Node* head = NULL;
  insertAtBeginning(head, 10);
  insertAtBeginning(head, 20);
  insertAtBeginning(head, 30);

  printLL(head);
  insertAtEnd(head, 5);
  insertAtEnd(head, 1);
  printLL(head);
  return 0;
}