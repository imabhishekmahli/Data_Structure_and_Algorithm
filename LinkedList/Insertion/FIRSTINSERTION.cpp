#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void display(struct node *ptr)
{
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

struct node *atstarting(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));

    head->data = 500;
    head->next = first;

    first->data = 1000;
    first->next = second;

    second->data = 1500;
    second->next = NULL;

    display(head);
    cout<<endl;
    head = atstarting(head, 100);
    display(head);

    return 0;
}