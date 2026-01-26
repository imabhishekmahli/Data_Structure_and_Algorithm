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
    n = n->next;
  }
  cout<<"NULL";
}
int main()
{
  Node* head = NULL;

  Node* first = new Node();
  first->data =10;
  first->next = NULL;
  head = first;

  Node* second = new Node();
  second->data = 34;
  second->next = NULL;
  first->next = second;

  Node* third = new Node();
  third->data =45;
  third->next = NULL;
  second->next = third;

  printLL(first);
  cout<<endl;

  Node* newNode = new Node();
  newNode->data = 5;
  newNode->next = head;
  head=newNode;

  printLL(head);
  return 0;
}