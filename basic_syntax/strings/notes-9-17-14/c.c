#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  char s[5];
  // This is the only time htat you can use an equal sign and a string literal.
  char string[50] = "hurdudhuhrdurr";

  s[0] = 'h';
  s[1] = 'i';
  s[2] = '!';
  s[4] = 0; //The null indicates that it's the end of the string.

  printf("s : %s \n", s);
  printf("string variable: %s \n", string);
  printf("strlen : %lu \n", strlen(s));

  return 0;
}
