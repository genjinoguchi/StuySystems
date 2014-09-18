#include <stdio.h>
#include <stdlib.h>

int slen( char s[]){ //char *s works as well
  int x;
  while(s[x]){
    x++;
  }
  
  return x;
}

int main(){
  int arylen;
  char s[128] = "hello!";

  printf("Length : %d\n", slen(s));

  return 0;
}
