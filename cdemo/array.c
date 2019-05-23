#include <stdio.h>

void arrayAdd(int s, int n)
{
    for (int x = 0; x <= 100; x ++)
  {
    printf("%d ", n);
    n++;
  }
}

int main()
{
  int arr[100];

  for (int i = 0; i <= 100; i ++)
  {
    arr[i] = i * i;
  }
  arrayAdd(100, arr);
  return 0;
}
