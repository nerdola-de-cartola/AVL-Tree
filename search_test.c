#include "lib/avl.h"

int main(void) {
   Node *tree = createTree();
   bool exist;

   tree = insert(tree, 0);
   tree = insert(tree, 1);
   tree = insert(tree, 123);
   tree = insert(tree, 13);
   tree = insert(tree, -3);
   tree = insert(tree, -24);
   tree = insert(tree, -9);

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