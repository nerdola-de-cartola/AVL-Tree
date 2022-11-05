typedef struct Node {
   int n;
   struct Node *left;
   struct Node *right;
} Node;

typedef struct Avl {
   int size;
   Node *root;
} Avl;

/**
 * @brief Cria uma árvore AVL
 * 
 * @return Retorna a árvore criada
 */
Avl createAvl();