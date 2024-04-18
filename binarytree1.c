#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode;
struct node* root;

struct node* create(int n) {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node*insertleft(struct node*root,int n){
    root->left=create(n);
    return root->left;
}
struct node*insertright(struct node*root,int n){
    root->right=create(n);
    return root->right;
}
void inorder(struct node* root) {        
    if (root == NULL)
        return;
    
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    root = NULL;
    root=create(30);
    insertleft(root,40);
    insertright(root,59);
    inorder(root);
    return 0;
}
