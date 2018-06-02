#include <stdio.h>
#include <stdlib.h>

int add2num(int, int);

int main(int argc, char *argv[])
{
  int x, y, sum;

  x = atoi(argv[1]);
  y = atoi(argv[2]);

  sum = add2num(x, y);

  printf("\n%ld\n", sum);

  return 0;
}

int add2num(int x, int y)
{
  int z;
  int8_t ovr = 1;

  asm(" movl %[x], %%edi  \n"
      
      " movl %[y], %%esi  \n"
      
      " addl %%esi, %%edi  \n"
      
      "jo L1   \n" // jumps if OF is set

      "movl %%edi, %[z] \n "

      " jmp L2   \n"

      "L1:    \n"
      "   movl $0x0, %[z]   \n" // sets z to 0
      "   movl $0x0, %[ovr]   \n"

      "L2:   \n"
      "   nop   \n"
      
      : [z] "=m"  (z)
      : [x] "m" (x),
        [y] "m" (y),
        [ovr] "m" (ovr)
      );
  if (ovr == 0) 
  {
    printf("Error! Numbers entered are too large, the overflow flag was set.");
    exit(2);
  }

  return z;
}
