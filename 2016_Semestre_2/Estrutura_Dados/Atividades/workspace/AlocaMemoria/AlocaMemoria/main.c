#include <stdio.h>
#include <stdlib.h>

void aloca()
{
 int *ptr;
 ptr = (int *) malloc(100);

 free(ptr);
}

int main(void)
{
 while(1)
  aloca();

 return 0;
}
