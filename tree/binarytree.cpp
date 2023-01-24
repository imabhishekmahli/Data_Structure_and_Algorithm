#include<iostream>
#include "bits/stdc++.h"

using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;

    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    /*
        1
       / \
      2   3
    */
    
    root->left->left = new node(4);
    root->left->right = new node(5);

    return 0;
}