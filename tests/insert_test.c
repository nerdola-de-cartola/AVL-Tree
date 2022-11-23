#include <stdio.h>

#include "../lib/avl.h"

int main(void) {
   Node *tree = createTree();

   insert(&tree, 2);
   insert(&tree, 3);
   insert(&tree, 1);
   insert(&tree, 6);
   insert(&tree, 0);
   insert(&tree, 1287);
   insert(&tree, 1127);
   insert(&tree, 17);
   insert(&tree, 227);
   insert(&tree, -17);
   insert(&tree, -22);
   insert(&tree, -55);

   printTree(tree, 0);
   printf("\n");

   return 0;
}