typedef struct Node {
   int n;
   int height;
   struct Node *left;
   struct Node *right;
} Node;


/**
 * @brief Cria uma árvore AVL
 * 
 * @return Retorna a árvore criada
 */
Node *createTree();
