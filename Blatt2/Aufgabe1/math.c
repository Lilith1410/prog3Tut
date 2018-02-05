#include <stdio.h> 

void berechne(void){
 char wahl; 
 printf("Ihre Wahl: \n");
 printf("<S>umme oder <D>ifferenz? ");  
 scanf("%c", &wahl);
 if(wahl == "S" || wahl = "s" ) {
 summe(); 
 } else if () {
 differenz(); 
 } 
}


int main(void) {
 berechne(); 
 return 0; 
}
