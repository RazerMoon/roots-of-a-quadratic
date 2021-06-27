#include <stdio.h>
#include <stdlib.h>

#include "roots.h"

int main(int argc, char *argv[]) {

  if ( argc == 4 ) {
   int a = atoi(argv[1]);
   int b = atoi(argv[2]);
   int c = atoi(argv[3]);

   struct Roots roots;
   getRoots(&roots, a, b, c);
     
   printf("The first root is %lf and the second root is %lf\n", roots.first, roots.second);
  }
  else {
   fprintf(stderr, "Three arguments expected.\n");
   exit(-1);
  }
   
  exit(0);
}