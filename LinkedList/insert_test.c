#include <stdio.h>
#include "linkedlist.h"

int main(){
    Node * head;
    insert_front(head,5);
    insert_front(head,6);
    insert_front(head,7);
    printList(head);
}