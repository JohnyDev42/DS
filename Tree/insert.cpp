#include <iostream>
#include <queue>

using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
};

Node* create_node(int data){
    Node * newNode = new Node();
    if(!newNode){
        cout<<"Memory Error!\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert_node(Node* root, int data){
    if (root == NULL){  // If tree is Empty
        root = create_node(data);
        return root;
    }

    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp->left != NULL){
            q.push(temp->left);
        }else{
            temp->left = create_node(data);
            return root;
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }else{
            temp->right = create_node(data);
            return root;
        }
    }
    return NULL;
}

void print_inoder(Node* root){
    if(root ==NULL){
        return;
    }
    print_inoder(root->left);
    cout<<root->data<<" ";
    print_inoder(root->right);
}

int main(){
    Node * root = create_node(10);
    root->left = create_node(11);
    root->right=create_node(9);
    root->left->left=create_node(7);
    root->right->left=create_node(15);
    root->right->right=create_node(8);

    cout<<"Before insert:";
    print_inoder(root);
    insert_node(root,12);
    cout<<"\nAfter insert:";
    print_inoder(root);

}