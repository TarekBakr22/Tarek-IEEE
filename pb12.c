#include <stdio.h>
#include <math.h>

int main() {
  float number, square_root;

  printf("Enter a number: ");
  scanf("%f", &number);

  square_root = sqrt(number);

  printf("The square root of %fis %f\n", number, square_root);

}