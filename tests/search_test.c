#include <stdbool.h>
#include "../lib/avl.h"

int main(void) {
   Node *tree = createTree();
   bool exist;

   insert(&tree, 0);
   insert(&tree, 1);
   insert(&tree, 123);
   insert(&tree, 13);
   insert(&tree, -3);
   insert(&tree, -24);
   insert(&tree, -9);

   exist = searchTree(tree, 0);
   if(exist) printf("True\n");
   else printf("False\n");

   exist = searchTree(tree, 66);
   if(exist) printf("True\n");
   else printf("False\n");

   exist = searchTree(tree, 42);
   if(exist) printf("True\n");
   else printf("False\n");

   exist = searchTree(tree, -9);
   if(exist) printf("True\n");
   else printf("False\n");

   exist = searchTree(tree, 123);
   if(exist) printf("True\n");
   else printf("False\n");

   return 0;
}