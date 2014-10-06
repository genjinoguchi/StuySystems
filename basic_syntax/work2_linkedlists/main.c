#include <stdio.h>
#include <stdlib.h>

#include "header_linked.h"


int main() {
  node *head;
  int x;

  for(x=0;x<10;x++){
    head = insert_front(head, x);
  }
  print_list(head);
  
  printf("\n\n");

  free_list(head);
  print_list(head);

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

node *insert_front(node *head, int data) {
  if(head){
    node *temp;
    
    temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    head = temp;
  } else {
    head = (node *)malloc(sizeof(node));
    head->next=0;
    head->data=data; 
  }
  return head;
  
}

node *free_list(node *head){
  node *current;
  node *freethis;

  current = head;
  while(current){
    freethis = current;
    current = current->next;
    free(freethis);
  }
  return head;
}
