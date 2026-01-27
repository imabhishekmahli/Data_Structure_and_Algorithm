#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void insertionAtBeginning(Node* &head, int value)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}

void insertionAtEnd(Node* head, int value)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  if(head==NULL)
  {
    head = newNode;
    return;
  }

  Node* temp = head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newNode;
}

void insertionInBetween(Node* head, int target, int value)
{
  Node* newNode = new Node();
  newNode->data = value;

  Node* temp = head;
  while(temp!=NULL && temp->data!=target)
  {
    temp=temp->next;
  }
  if(temp==NULL)
  return;
  newNode->next=temp->next;
  temp->next=newNode;
}

void printll(Node* n)
{
  while(n!=NULL)
  {
    cout<<n->data<<"->";
    n=n->next;
  }
  cout<<"NULL";
}
int main()
{
  Node* head = NULL;
  insertionAtBeginning(head,3);
  insertionAtBeginning(head,2);
  insertionAtBeginning(head,1);
  insertionAtEnd(head,4);
  insertionInBetween(head,2,50);
  printll(head);
  return 0;
}