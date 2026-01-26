#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

void inserttionAtBeginneing(Node* &head, int value)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}

void insertionAtEnd(Node* &head, int value)
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
    temp=temp->next;
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
  inserttionAtBeginneing(head, 10); 
  inserttionAtBeginneing(head, 20);
  inserttionAtBeginneing(head, 30);
  insertionAtEnd(head, 5);
  insertionAtEnd(head, 1);
  printLL(head);
  return 0;
}