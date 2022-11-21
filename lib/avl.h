typedef struct Node {
   int data;
   int height;
   struct Node *left;
   struct Node *right;
} Node;


Node *createNode(int data);                     /*********************************************/

//int sizeTree(Node *root);

Node *insertNode(Node *root, Node *newNode);    /*********************************************/

//int removeNode(Node *root);

//int searchTree(int data);

//int bfsTree(Node *root)

int height(Node *root);                         /*********************************************/

int max(int x, int y);                          /*********************************************/

int getBalance(Node *root);                     /*********************************************/

void prefix(Node *root);                        /*********************************************/

void infix(Node *root);                         /*********************************************/

void postfix(Node *root);                       /*********************************************/

void printTree(Node *root, int repeater);       /*********************************************/

Node *rotateL(Node *root);                      /*********************************************/

Node *rotateR(Node *root);                      /*********************************************/
