#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int x;
  printf("length: %d", length(123455));


  return 0;
}

int isPalindrome(long x){
  short length;
  short x;
  char isPalindrome;

  if(x<0){
    return 0;
  }else{
    length = length(x);
    isPalindrome = 0;
    for(x=0;x<length/2;x++){
      if()
    }
    
  }  


}

  int[] parse(long x){



int length(long x){
  short length;

  if(x<0){
    return 0;
  }else{
    length = 0;
    while(x>0){
      x = x/10;
      length++;
    }
    return length;
  }
}
