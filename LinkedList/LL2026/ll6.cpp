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

void insertAtBetween(Node* &head, int target, int value)
{
  Node* newNode = new Node();
  newNode->data = value;

  if(head==NULL)
  {
    head = newNode;
    return;
  }
  Node* temp = head;
  while(temp!=NULL && temp->data!=target)
  {
    temp= temp->next;
  }
  newNode->next=temp->next;
  temp->next=newNode;
}

void insertAtEnd(Node* head, int value)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  if(head==NULL)
  {
    head=newNode;
    return;
  }
  Node* temp = head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newNode;
}

void deleteAtBeginning(Node* &head)
{
  if(head==NULL) return;
  Node* temp = head;
  head=head->next;
  delete temp;
}

void printLL(Node* n)
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
  insertAtBeginning(head, 100);
  insertAtBeginning(head,75);
  insertAtBeginning(head,25);
  insertAtBetween(head,25,50);
  insertAtEnd(head,125);
  printLL(head);
  cout<<endl;
  deleteAtBeginning(head);
  printLL(head);
  return 0;

}