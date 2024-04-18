#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*left,*right;
    int data;
}*root = NULL;
void append(int n){
    int flag = 0;
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=n;
    if(root==NULL){
        root = newnode;
    }else{
        struct node*temp,*temp1;
        while(1){
            if(temp->left == NULL){
                temp->left = newnode;
            }
            else if(temp->right==NULL){
                temp->right = newnode;
            }
            else if(flag == 0){
                temp = temp1->left;
                flag = 1;
            }else{
                temp = temp1->right;
                flag = 0;
                temp1 = temp1->left;
            }
        }
    }

}
void preorder(struct node*temp){
    if(temp!=NULL){
        printf("%d",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(struct node*temp){
    if(temp!=NULL){
        inorder(temp->left);
        printf("%d",temp->data);
        inorder(temp->right);
    }
}
void postorder(struct node*temp){
    if(temp!=NULL){
        postorder(temp->left);
        postorder(temp->right);
        printf("%d",temp->data);
    }
}
int main(){
    int n;
    do{
        scanf("%d",&n);
        if(n>0){
            append(n);
        }
    }while(n>0);
    printf("INORDER:");
    inorder(root);
    printf("PREORDER:");
    preorder(root);
    printf("POSTORDER:");
    {
        postorder(root);
    }
}