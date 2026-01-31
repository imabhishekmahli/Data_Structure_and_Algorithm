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

void insertInBetween(Node* &head, int target, int value)
{
  Node* newNode = new Node();
  newNode->data = value;

  if(head==NULL)
  {
    newNode=head;
  }
  Node* temp = head;
  while(temp->next!=NULL && temp->data!=target)
  {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next=newNode;
}

void insertAtEnd(Node* &head, int value)
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
    temp=temp->next;
  }
  temp->next=newNode;
}

void deleteLL(Node* &head)
{
  if(head==NULL) return;
  
  Node* temp = head;
  head = head->next;
  delete temp;
}

int findMax(Node* head) {
    if (head == NULL) {
        return -1;  // empty list (handle as needed)
    }

    int maxElement = head->data;
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data > maxElement) {
            maxElement = temp->data;
        }
        temp = temp->next;
    }

    cout<<maxElement;
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
  insertAtBeginning(head,10);
  insertAtBeginning(head,20);
  insertAtBeginning(head,30);
  insertInBetween(head,20,50);
  insertAtEnd(head,60);
  deleteLL(head);
  findMax(head);
  printLL(head);
  return 0;
}