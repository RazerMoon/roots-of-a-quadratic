#include <math.h>

#include "roots.h"

void getRoots(struct Roots *roots, int a, int b, int c) {
  roots->first = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
  roots->second = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

  return;
};