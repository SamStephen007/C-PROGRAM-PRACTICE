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

struct node* insert(struct node* root, int n) {
    if (root == NULL)
        return create(n);

    if (n < root->data)
        root->left = insert(root->left, n);
    else if (n > root->data)
        root->right = insert(root->right, n);

    return root;
}

void inorder(struct node* root) {       
    if (root == NULL)
        return;
    
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    int n, m, i;
    scanf("%d", &n);
    root = NULL;
    root = insert(root, 40);
    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        insert(root, m);
    }
    inorder(root);
    return 0;
}
