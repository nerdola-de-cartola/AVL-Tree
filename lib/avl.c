#include <stdio.h>

#include "avl.h"

Node *createNode(int data){
    Node *node = (Node *) malloc(sizeof(Node));

    node->data = data;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int height(Node *root){
    if(root != NULL){
        return root->height;
    }

    return 0;
}

int getBalance(Node *root){
    if(root != NULL){
        return height(root->left) - height(root->right);
    }

    return 0;
}

void prefix(Node *root){
    if(root != NULL){
        printf("%d ", root->data);
        prefix(root->left);
        prefix(root->right);
    }
}

void infix(Node *root){
    if(root != NULL){
        infix(root->left);
        printf("%d ", root->data);
        infix(root->right);
    }
}

void postfix(Node *root){
    if(root != NULL){
        postfix(root->left);
        postfix(root->right);
        printf("%d ", root->data);
    }
}
