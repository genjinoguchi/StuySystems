#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ip;
  double *dp;
  char *cp;

  int i;
  double d;
  char c;

  ip = &i;
  dp = &d;
  cp = &c;

  printf("Int pointer : %ld\n", ip);
  printf("double pointer : %ld\n", dp);
  printf("char pointer : %ld\n", cp);

  ip++;
  dp++;
  cp++;

  printf("Int pointer : %ld\n", ip);
  printf("double pointer : %ld\n", dp);
  printf("char pointer : %ld\n", cp);

  return 0;
}
