#include <stdio.h> 
#include <stddef.h>
#include <string.h>

char* find(char s[], char c) {
 char* cp = NULL;
 char* start; 
 for (start = s; *start != '\0'; ++start) {
  if (*start == c){
   cp = *start;  
  }
 } 
 printf("Type char s[]: %p\n", (void*)s); 
 printf("Type char c: %c\n", c);
 printf("2: letzte vorkommende stelle: %p\n", (void*)cp); 
 return cp; 
}

int main(void){
 char c = 'e'; 
 char string[] = "Valeriev"; 
 char* cp = find(string, c); 
 printf("3: Letzte vorkommende Stelle: %c\n", *cp); 
 return 0; 
}


/* Diese Lösung hat komplett auf int i = 0 für for-schleife verzichtet. Stattdessen den Array-Durchlauf aus der vorigen Aufgabe kopiert. 
Es sieht aus, als würde das jetzt funktionieren. Allerdings mit der Ausgabe unzufrieden. Das ist eher provisorisch. 
