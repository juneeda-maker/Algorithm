#include <stdio.h>

int main()
{

  int number;

  scanf("%X", &number);

  for(int i = 1; i <= 15; i++)
  {
    printf("%X*%X=%X\n", number , i, number * i);
  }

  return 0;
}