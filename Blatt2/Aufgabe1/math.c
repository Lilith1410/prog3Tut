#include <stdio.h> 
#include "differenz.h"
#include "summe.h"

void berechne(void){
 char wahl; 
 int result; 
 printf("Ihre Wahl: \n");
 printf("<S>umme oder <D>ifferenz? ");  
 scanf("%c", &wahl);
 if(wahl == 'S' || wahl == 's' ) {
 result = summe(); 
 } else if (wahl == 'd' || wahl == 'D') {
 result = differenz(); 
 } 
 printf("Ergebnis: %d\n", result); 
}


int main(void) {
 berechne(); 
 return 0; 
}
