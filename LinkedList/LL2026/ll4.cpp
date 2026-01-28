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
  head = newNode;
}

void insertAtEnd(Node* head, int value)
{
  Node* newNode = new Node();
  newNode->data=value;
  newNode->next=NULL;

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

void insertInBetween(Node* &head, int target, int value)
{
  Node* newNode = new Node();
  newNode->data=value;

  Node* temp = head;
  while(temp!=NULL && temp->data!=target)
  {
    temp= temp->next;
  }
  if(temp==NULL)
  return;

  newNode->next=temp->next;
  temp->next=newNode;

}

void deleteAtStart(Node* &head)
{
  if(head==NULL) return;

  Node* temp = head;
  head = head->next;
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
  insertAtBeginning(head,11);
  insertAtBeginning(head,22);
  insertAtBeginning(head,33);
  insertAtEnd(head,44);
  insertAtEnd(head,55);
  insertAtBeginning(head,99);
  insertInBetween(head,22,25);
  printLL(head);
  deleteAtStart(head);
  cout<<endl;
  printLL(head);
  return 0;
}