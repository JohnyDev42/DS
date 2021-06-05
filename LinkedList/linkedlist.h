
typedef struct node{
    int data;
    struct node * next; 
}Node;

void insert_front(Node* first,int data);
void insert_end(Node* last,int data);
void insert_after(Node* prev_node,int data);
void printList(Node *head);