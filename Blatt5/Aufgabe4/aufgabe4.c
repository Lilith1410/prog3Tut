#include <stdio.h>
#include <stdlib.h>

void free0(char** p){
  free(*p); 
  *p = NULL; 
}

int main(void){
  char* p = malloc(10); 
  printf("%p\n", p); 
  free0(&p); 
  printf("%p\n", p); 
  return 0; 
}
