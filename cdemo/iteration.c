#include<stdio.h>

int main()
{
  int i = 0;
  int div = 2;
  for (i = 0 ; i <= 100; i ++)
  {
    if ( i%div == 0 )
    {
      printf ( "%d\n", i );
    }
  }
  return 0;
}
