#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
struct node*newnode,*root;
struct node* create(int data){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->left = NULL;
    newnode->data = data;
    newnode->right = NULL;
    return newnode;
}
struct node* insert(struct node*root,int data){
    if(root == NULL){
        return create(data);
    }
    else if(data<root->data){
        root->left = insert(root->left,data);
    }
    else if(data>root->data){
        root->right = insert(root->right,data);
    }
    return root;
}
void inorder(struct node*root){
    if(root == NULL)\
    
            return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void preorder(struct node*root){
    if(root==NULL){
        return;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
int main(){
    int data,i,n,m;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    root = insert(root,70);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        insert(root,m);
    }
    printf("preorder:\n");
    preorder(root);
    printf("\nInorder:\n");
    inorder(root);
    printf("\npostorder:\n");
    postorder(root);
}