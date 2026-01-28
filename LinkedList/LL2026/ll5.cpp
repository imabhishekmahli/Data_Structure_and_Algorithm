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
  head=newNode;
}

void insertAtEnd(Node* head, int value)
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
  if (head==NULL) return;
  Node* temp = head;
  head=head->next;
  delete temp;
}

void printLL(Node* next)
{
  while(next!=NULL)
  {
    cout<<next->data<<"->";
    next = next->next;
  }
  cout<<"NULL"<<endl;
}

bool search(Node* head, int key)
{
  Node* temp = head;
  while(temp!=NULL)
  {
    if(temp->data==key) return true;
    temp=temp->next;
  }
  return false;
}
int main()
{
  Node* head = NULL;
  insertionAtBeginning(head,10);
  insertionAtBeginning(head,20);
  insertAtEnd(head,33);
  insertAtEnd(head,44);
  insertInBetween(head,33,55);
  deleteAtStart(head);
  deleteAtStart(head);
  printLL(head);
  cout<<search(head,446);
  return 0;
}