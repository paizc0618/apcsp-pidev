#include <stdio.h>

int main()
{
  int a = 0;
  int b= 10;

  // if statement to test is a is equal to 0
  if (a == b)
  {
    printf("a is equal to b\n");
  }
  else
  {
    printf("a is not equal to b\n");
  }
  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to b\n");
  }
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is less than b\n");
  }
  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is less than b\n");
  }
  if (a == 0 && b == 0)
  {
    printf("a and b equal 0\n");
  }
  else
  {
    printf("a and b do not equal 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("a or b equal 0\n");
  }
  else
  {
    printf("neither a nor b equal 0\n");
  }
  if (!(a == 0))
  {
    printf("a does not equal 0\n");
  }
  else
  {
    printf("a equals 0\n");
  }
}
