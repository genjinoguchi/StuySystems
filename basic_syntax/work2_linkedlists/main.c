#include <stdio.h>
#include <stdlib.h>

#include "header_linked.h"


int main() {
  node *head;
  node a;
  node b;
  node c;
  node d;
  node e;
  node f;

  head = &a;
  a.data=5;
  a.next=&b;
  b.data=6;
  b.next=&c;
  c.data=7;
  c.next=&d;
  d.data=8;
  d.next=&e;
  e.data=9;
  e.next=&f;
  f.data=10;
  f.next=0;
  
  free_list(head);
  //print_list(head);
  
  return 0;
} 

void print_list(node *head) {
  node *current;

  current = head;
  while(current){
    printf("Data : %d\n",current->data);
    current = current->next;
  }
  
}

node *insert_front(node *head) {
  
  
  
  
}

node *free_list(node *head){
  node *current;
  node *freethis;

  current = head;
  while(current){
    freethis = current;
    current = current->next;
    //free(freethis);
  }
  return head;
}
