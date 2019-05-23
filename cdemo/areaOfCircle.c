#include <stdio.h>

float areaFunction(float r)
{
  float a;
  a = r*r*3.14;

  return a;
}

int main()
{
  float r;

  for (r = 3.5 ; r <= 12.5 ; r ++)
  {
    printf("Area: %.2f\n", areaFunction(r));
  }
return 0;
}
