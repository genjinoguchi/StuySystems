#include <stdio.h>
#include <stdlib.h>

void foo(int *);

int main(){
  int arr[256];

  arr[0]=1;
  arr[1]=2;

  foo(arr);

  printf("%d\n", arr[0]);
  printf("%d\n", arr[1]);

  return 0;
}

void foo(int *arr){
  arr[0]=5;
  arr[1]=6;

}
