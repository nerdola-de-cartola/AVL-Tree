#include <stdio.h>
#include "./lib/avl.h"

int main(void) {
   Node *tree = createTree();

   printf("%p\n", tree);

   return 0;
}