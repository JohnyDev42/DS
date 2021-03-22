#include<stdio.h>

struct node
{
    /* data */
    int data;
    struct node * left;
    struct node * right;
};

struct node * newNode(int data){
    struct node * node;
    node = (struct node*)malloc(sizeof(struct node));
    if(node==NULL) return NULL;
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
