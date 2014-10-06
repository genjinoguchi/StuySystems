#include <stdio.h>
#include <stdlib.h>

typedef struct n {
  int data;
  struct n *next;
} node;


//Function headers
void print_list(node *);
node *insert_front(node *,int data);
node *free_list(node *);

/*
print_list
Should take a pointer to a node struct and print out all of the data in the list


insert_front
Should take a pointer to the existing list and the data to be added, create a new node, put it at the beginning of the list and return a pointer to the beginning of the list.


free_list
Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then)

*/
