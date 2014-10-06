#include <stdio.h>
#include <stdlib.h>

typedef struct n {
  int data;
  struct n *next;
} node;

typedef struct {
  node *head;
} linkedlist;

//Function headers
void print_list(node *)
node *insert_front
