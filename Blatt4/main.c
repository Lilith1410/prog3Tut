#include <stdio.h> 
#include <stddef.h>

char* find(char s[], char c) {
 char* cp = NULL;
 int i = strlen(s); 
 for (i; i > 0; --i) {
  if (s[i] == c){
   cp = &s[i];  
  }
 } 
 return cp; 
}

int main(void){
 char v = 'v'; 
 char a[] = 'Valeriev'; 
 char* cp = find(&a, v); 
 printf("Letzte vorkommende Stelle: %c\n", *cp); 
 return 0; 
}
