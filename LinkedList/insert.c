#include "linkedlist.h"
#include<stdio.h>
#include<stdlib.h>

void insert_front(Node* head,int data){
    Node * tmp= (Node*)malloc(sizeof(Node));
    tmp->data=data;
    if(!tmp) return;
    if(head == NULL){   //If there is no node
        tmp->next=NULL;
        head=tmp;
    }else{              //If any node exist
        tmp->next=head;
        head=tmp;
    }
}
void insert_end(Node* last,int data){
    Node * tmp= (Node*)malloc(sizeof(Node));
    tmp->data=data;
     if(last == NULL){   //If there is no node
        tmp->next=NULL;
        last=tmp;
    }else{  
        last->next=tmp;
    }            
}
void insert_after(Node* prev_node,int data){
    Node * tmp= (Node*)malloc(sizeof(Node));
    tmp->data=data;
    if(prev_node ==NULL){
        printf("Given node can't be NULL\n");
    } 
    else{       //Insert after given node
        tmp->next=prev_node->next;
        prev_node->next=tmp;
    }
}