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

void insertAtBetween(Node* head, int target, int value)
{

}

void insertAtEnd(Node* head, int value)
{

}

void deleteAtBeginning(Node* head)
{

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
  printLL(head);
  return 0;
}