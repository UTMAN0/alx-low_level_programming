#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *q;

  a[2] = 1024;
  q = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify q
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(q + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
