#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void insertAtBeginning(Node* &head, int value)
{
  Node* newNode = new Node();
  newNode->data=value;
  newNode->next=head;
  head=newNode;
}

void insertAtBetween(Node* &head, int target, int value)
{
  Node* newNode = new Node();
  newNode->data = value;

  if(head==NULL)
  {
    head=newNode;
  }

  Node* temp = head;
  while(temp->next!=NULL && temp->data!=target)
  {
    temp=temp->next;
  }
  newNode->next=temp->next;
  temp->next=newNode;
}

void insertAtEnd(Node* head, int value)
{
   Node* newNode = new Node();
   newNode->data=value;
   newNode->next=NULL;

   if(head==NULL)
   {
    head=newNode;
   }
   Node* temp = head;
   while(temp->next!=NULL)
   {
    temp= temp->next;
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
  cout<<"NULL"<<endl;
}
int main()
{
  Node* head = NULL;
  insertAtBeginning(head,25);
  insertAtBeginning(head,50);
  insertAtBeginning(head,75);
  insertAtBetween(head,50,30);
  insertAtEnd(head,15);
  insertAtEnd(head,5);
  deleteAtBeginning(head);
  printLL(head);
  return 0;
}