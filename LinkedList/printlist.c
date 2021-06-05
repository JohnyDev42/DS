#include<stdio.h>
#include "linkedlist.h"

void printList(Node *head){
    while(head){
        printf("%d->",head->data);
        head=head->next;
    }
}