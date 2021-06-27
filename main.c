#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Roots {
   double first;
   double second;
};

void getRoots(struct Roots *roots, int a, int b, int c) {
   roots->first = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
   roots->second = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

   return;
}

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