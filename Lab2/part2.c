#include <stdio.h>
#include <stdlib.h>

double pendCalc(double);

int main(int argc, char *argv[])
{
  double length, answer;
  
  length = atof(argv[1]);

  answer = pendCalc(length);

  printf("\nThe period of the pendulum is %.2f.\n", answer);

  return 0;
}

double pendCalc(double len)
{

  double tot = 0;
  double eq = 2.01;

  asm(" fldl  %[eq] \n"
      " fldl  %[len]  \n"
      " fsqrt \n"
      " fmulp \n"
      "fstpl %[tot] \n"
      : [tot] "=m" (tot) ,
        [len] "=m" (len) 
      :  [eq]  "m" (eq)
      );

  return tot;
}
