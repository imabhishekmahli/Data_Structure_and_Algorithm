#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void display(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = first;

    first->data = 10;
    first->next = second;

    second->data = 15;
    second->next = NULL;

    display(head);

    return 0;
}