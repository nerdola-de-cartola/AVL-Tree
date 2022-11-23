#include <stdio.h>
#include "../lib/avl.h"

int main(void) {
   Node *tree1 = createTree();
   Node *tree2 = createTree();
   Node *tree3 = createTree();

   insert(&tree1, 90);
   insert(&tree1, 12);
   insert(&tree1, 0);
   insert(&tree1, -10);

   insert(&tree2, 14);
   insert(&tree2, 28);
   insert(&tree2, -1);

   tree3 = merge(tree1, tree2);

   printTree(tree3, 0);

   destroy(&tree1);
   destroy(&tree2);
   destroy(&tree3);

   return 0;
}