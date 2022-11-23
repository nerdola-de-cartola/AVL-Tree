#include <stdio.h>
#include "../lib/avl.h"

int main(void) {
   Node *tree = createTree();

   insert(&tree, 5);
   insert(&tree, 4);
   insert(&tree, 3);
   insert(&tree, -1);
   insert(&tree, 10);
   insert(&tree, 15);
   insert(&tree, 7);

   printTree(tree, 0);
   printf("\n");

   BFS(tree);

   destroy(&tree);

   return 0;
}