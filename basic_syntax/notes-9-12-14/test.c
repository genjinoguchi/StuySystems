#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int x;
  int y;
  int *p;

  //Link together the memory location and the pointer.
  p = &x;
  //0xaefijaweofijoaief - hexadecimal

  printf("p = %p\n", *p);
  printf("&x = %lu\n", &x);
  printf("&y = %lu\n", &y);

  return 0;
  
}

