#include <stdio.h>

#include "./lib/avl.h"

int main(void) {
   Node *tree = createTree();

   tree = insert(tree, 2);
   tree = insert(tree, 3);
   tree = insert(tree, 1);
   tree = insert(tree, 6);
   tree = insert(tree, 0);
   tree = insert(tree, 1287);
   tree = insert(tree, 1127);
   tree = insert(tree, 17);
   tree = insert(tree, 227);
   tree = insert(tree, -17);
   tree = insert(tree, -22);
   tree = insert(tree, -55);

   printTree(tree, 0);
   printf("\n");

   return 0;
}