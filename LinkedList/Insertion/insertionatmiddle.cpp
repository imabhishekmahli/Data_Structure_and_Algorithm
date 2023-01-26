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

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 50;
    head->next = first;

    first->data = 100;
    first->next = second;

    second->data = 150;

    fourth->data = 200;
    fourth->next = NULL;

    struct node *third = (struct node *)malloc(sizeof(struct node));
    third->data = 155;
    third->next = fourth;
    second->next = third;
    
    display(head);

}