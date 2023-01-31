#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

// insertion at the start
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));
    struct node *sixth = (struct node *)malloc(sizeof(struct node));

    head->data = 25;
    head->next = first;

    first->data = 50;
    first->next = second;

    second->data = 75;
    second->next = third;

    third->data = 100;
    third->next = fifth;

    fifth->data = 125;
    fifth->next = sixth;

    sixth->data = 150;
    sixth->next = NULL;

    cout<<"list :";
    display(head);
    cout<<endl;
    cout<<"list after insertion :";
    head = insertatfirst(head, 200);
    display(head);

    return 0;
}