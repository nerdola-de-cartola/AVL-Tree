#include <stdio.h>
#include "../lib/avl.h"

int main(void) {
   Node *tree = createTree();
   printf("%d\n", sizeTree(tree));

   insert(&tree, -25);
   printf("%d\n", sizeTree(tree));

   insert(&tree, 25);
   printf("%d\n", sizeTree(tree));

   insert(&tree, 14);
   printf("%d\n", sizeTree(tree));

   insert(&tree, 140);
   printf("%d\n", sizeTree(tree));

   insert(&tree, 0);
   printf("%d\n", sizeTree(tree));

   insert(&tree, -1);
   printf("%d\n", sizeTree(tree));

   printf("\n");
   printTree(tree, 0);

   return 0;
}