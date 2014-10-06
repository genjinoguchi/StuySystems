#include <stdio.h>
#include <stdlib.h>

typedef struct n {
  int data;
  struct n *next;
} notes;


int main(){

  notes a;
  notes b;

  a.data = 5;
  b.data = 6;

  a.next = &b;
  b.next = 0;

  while( a ) {
    printf("%d\n", (*p).x);
    p = p->next; //same as(*p).next

  return 0;
}
