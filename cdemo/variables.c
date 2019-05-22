#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  c = a;
  a = 5;
  printf("I flipped the values of a = %d  and c = %d\n", a, c);
}
