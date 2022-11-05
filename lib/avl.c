#include <stdio.h>

#include "avl.h"

Avl createAvl() {
   Avl tree;

   tree.root = NULL;
   tree.size = 0;

   return tree;
}