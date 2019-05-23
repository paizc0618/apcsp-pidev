#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'b';
  float c = 1.5;
  double d = 2.5;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("int a value: %c and size: %lu bytes\n", b, sizeof(b));
  printf("int a value: %f and size: %lu bytes\n", c, sizeof(c));
  printf("int a value: %lf and size: %lu bytes\n", d, sizeof(d));
}

