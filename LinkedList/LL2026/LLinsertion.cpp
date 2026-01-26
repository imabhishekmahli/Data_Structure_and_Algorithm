#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

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

  Node* first = new Node();
  first->data = 10;
  first->next = NULL;
  head = first;

  Node* second = new Node();
  second->data = 15;
  second->next = NULL;
  first->next = second;

  Node* third = new Node();
  third->data = 20;
  third->next = NULL;
  second->next = third;

  printLL(head);
  
  Node* newNode = new Node();
  newNode->data = 5;
  newNode->next = head;
  head = newNode;
  cout<<"After Insertion at Beginning: ";
  printLL(head);

  return 0;
}