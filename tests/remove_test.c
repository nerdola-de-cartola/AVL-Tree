#include <stdio.h>
#include "../lib/avl.h"

int main(void) {
   Node *tree = createTree();

   insert(&tree, 5);
   insert(&tree, -2);
   insert(&tree, -1);
   insert(&tree, 0);
   insert(&tree, 25);

   printTree(tree, 0);
   printf("\n");

   delete(&tree, 0);

   printTree(tree, 0);

   destroy(&tree);


   return 0;
}