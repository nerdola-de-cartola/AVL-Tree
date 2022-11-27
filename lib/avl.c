#include "avl.h"

Node * createTree() {
    return NULL;
}

Node *createNode(int data){
    Node *node = (Node *) malloc(sizeof(Node));

    node->data = data;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;

    return node;
}

int sizeTree(Node *root) {
    int size = 0;

    if(root == NULL) return 0;

    if(root->left != NULL) size += sizeTree(root->left);
    if(root->right != NULL) size += sizeTree(root->right);

    return size + 1;
}

Node *insert(Node *root, int newData) {
    return insertNode(root, createNode(newData));
}

Node *insertNode(Node *root, Node *newNode){
    int rootBalance;

    if(root == NULL){
        root = newNode;
        return root;
    }
    if(newNode->data < root->data){
        root->left = insertNode(root->left, newNode);
    }
    else{
        if(newNode->data > root->data){
            root->right = insertNode(root->right, newNode);
        }
        else return root;
    }

    root->height = 1 + max(height(root->left), height(root->right));
    rootBalance = getBalance(root);

    if(rootBalance > 1 && newNode->data < root->left->data){ //RR rotation
        return rotateR(root);
    }
    if(rootBalance < -1 && newNode->data > root->right->data){ //LL rotation
        return rotateL(root);
    }
    if(rootBalance > 1 && newNode->data > root->left->data){ //LR rotation
        root->left = rotateL(root->left);
        return rotateR(root);
    }
    if(rootBalance < -1 && newNode->data < root->right->data){ //RL rotation
        root->right = rotateR(root->right);
        return rotateL(root);
    }

    return root;

}

int height(Node *root){
    if(root != NULL){
        return root->height;
    }

    return 0;
}

Node *searchTree(Node *root, int data) {
    if(root == NULL) return NULL;

    if(root->data == data) return root;

<<<<<<< Updated upstream
    Node *child;
    
    child = searchTree(root->left, data);
    if(child != NULL) return child;

    
    child = searchTree(root->right, data);
    if(child != NULL) return child;

    return NULL;
=======
    if(data < root->data) return searchTree(root->left, data);
    
    return searchTree(root->right, data);
>>>>>>> Stashed changes
}

int max(int x, int y){
    return (x > y) ? x : y;
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

void printTree(Node *root, int repeater){
    if(root != NULL){
        printTree(root->left, repeater + 2);

        for(int i = 0; i < repeater; ++i) {
            printf("-");
        }

        printf(">");
        printf(  "{ DATA : %d, Height : %d, Balance Factor : %d }\n", root->data, root->height, getBalance(root) );

        printTree(root->right, repeater + 2);
    }
}

Node *rotateL(Node *root){
    Node *newRoot = root->right;
    Node *temp = newRoot->left;

    newRoot->left = root;
    root->right = temp;

    root->height = 1 + max(height(root->left), height(root->right));
    newRoot->height = 1 + max(height(newRoot->left), height(newRoot->right));

    return newRoot;
}

Node *rotateR(Node *root){
    Node *newRoot = root->left;
    Node *temp = newRoot->right;

    newRoot->right = root;
    root->left = temp;

    root->height = 1 + max(height(root->left), height(root->right));
    newRoot->height = 1 + max(height(newRoot->left), height(newRoot->right));

    return newRoot;
}
