typedef struct Node {
   int data;
   int height;
   struct Node *left;
   struct Node *right;
} Node;


Node *createNode(int data);         /*********************************************/

//int sizeTree(Node *root);

//Node insertNode(Node *root);

//int removeNode(Node *root);

//int searchTree(int data);

//int bfsTree(Node *root)

int height(Node *root);             /*********************************************/

int getBalance(Node *root);         /*********************************************/

void prefix(Node *root);            /*********************************************/

void infix(Node *root);             /*********************************************/

void postfix(Node *root);           /*********************************************/

//void printTree(Node *root)

//void rotateLL();

//void rotateLR();

//void rotateRL();

//void rotateRR();
