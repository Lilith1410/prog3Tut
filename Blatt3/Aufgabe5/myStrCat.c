#include <stdio.h>
#include <string.h>

void stringConcat(char* charAr1, char* charAr2) {
 int sLen1 = strlen(charAr1); 
 int sLen2 = strlen(charAr2); 
 int i; 
 for ( i = 0; i < sLen2; ++i ) {
  charAr1[sLen1 + i] = charAr2[i]; 
 }
 charAr1[sLen1 + sLen2 + 1] = '/o'; 
}

int main(void){
 char s1[] = "Valerie "; 
 printf("%s\n", s1); 
 char s2[] = "Vaske";  
 printf("%s\n", s2);  
 stringConcat(s1, s2); 
 printf("%s\n", s1); 
 return 0; 
}
