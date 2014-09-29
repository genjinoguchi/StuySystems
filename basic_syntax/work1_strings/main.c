#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strheaders.h"

int main(){
  char s[256];
  char test[256];

  strcpy(s, "Hello World");

  printf("String Length: %ld\n\n", stringLength(s));

  printf("Original String: %s\n", s);
  printf("Copied String: %s\n\n", stringCopy(test, s));

  return 0;

}

long stringLength(char *s){
  int total;
  int x;
  
  x = 0;
  while(s[x]){
    x++;
  }
  return x;

}
char * stringCopy(char *dest,char *src){
  int x;
  long length;

  length = stringLength(src);
  for(x=0;x<length;x++){
    dest[x]=src[x];
  }

  return dest;
}
char * stringCopyN(char *dest,char *src, short i){


}
char * stringAppend(char *dest, char *src){


}
char * stringAppendN(char *dest, char *src, short i){


}
char stringCompare(char *s1, char *s2){



}
char * stringSearchChar(char *s, char c){


}
char * stringSearchString(char *dest, char *src){



}
