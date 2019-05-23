#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 1.5;
  float e = 2.5;

  float* ptrtod;
  float* ptrtoe;

  ptrtod = &d;
  ptrtoe = &e;

  *ptrtod = 1.5;
  *ptrtoe = 2.5;

  printf("The value of ptrtod is %f\n", ptrtod);
  printf("It stores the value %f\n", d);
  printf("The address of d is %f\n", &d);
  printf("The value of ptrtoe is %f\n", ptrtoe);
  printf("It stores the value %f\n", e);
  printf("The address of e is %f\n", &e);

  float temp;

  temp = d;
  d = e;
  e = temp;
  printf("After swapping, d = %f\n", d);
  printf("After swapping, e = %f\n", e);

  return 0;
}
