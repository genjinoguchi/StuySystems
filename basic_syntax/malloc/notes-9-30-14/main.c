#include <stdio.h>
#include <stdlib.h>

/*
Write a c program that dynamically allocates a 10 double array and a 20 character string (including the terminating null).
*/

void hurr();

int main(){
  double *arr;
  int arrsize;
  char *str;
  int strsize;

  arrsize = 10;
  strsize = 15;

  arr = (double *) malloc(arrsize * sizeof(double));
  arr[0]=0;

  str = (char *) malloc(strsize * sizeof(char));
  str[0]=0;

  free(arr);
  free(str);

  while(1)
    hurr();

  return 0;
}

void hurr(){
  long x;
  printf("\e[1;1H\e[2J");

  x = 10;
  printf("%ld",x);
  x = x*10;

}
