#include <stdio.h>

void print(void){
  printf("Hallo\n"); 
}

// Aufgabenteil a) 
void times(int n, void (*verarbFunc)(void) ){
  int i; 
  printf("Aufgabenteil a) \n"); 
  for ( i = 0; i < n; i++) {
    (*verarbFunc)(); 
  }
}

// Aufgabenteil b) 
void print2(int i){
  printf("%d\n", i); 
}

void times2(int n, void (*verarbFunc2)(int i)){
  int j; 
  printf("Aufgabenteil b) \n"); 
  for (j = 0; j < n; j++) {
    (*verarbFunc2)(j); 
  }
}

// Main
int main(void){
  times(6, print); 
  times2(3, print2); 
  return 0; 
}


