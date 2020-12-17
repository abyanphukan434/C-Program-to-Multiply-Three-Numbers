#include <stdio.h>

int main() 
{
  int a, b, c, product;
  printf("Enter three numbers:");
  scanf("%d%d%d, &a, &b, &c);
  product = a * b * c;
  printf("Product of the three numbers: %d\n", product);
  
  return 0;
}
