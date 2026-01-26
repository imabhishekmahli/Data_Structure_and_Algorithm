#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void insertAtStart(Node* &head, int value)
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
  while(temp->next!=NULL)
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
  insertAtStart(head, 10);
  insertAtStart(head, 20);
  insertAtStart(head, 30);
  insertAtStart(head, 40);
  insertAtEnd(head, 5);
  insertAtEnd(head, 1);
  printLL(head);
  return 0;
}