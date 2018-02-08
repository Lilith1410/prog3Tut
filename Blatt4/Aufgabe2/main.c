#include <stdio.h> 

int main(void) {
 int a[] = {1,5,19,-4,3}; 
 int* p; 
 int i; 

 /* Lasse p auf dsa 0-te Array-Element verweisen */ 
 p = (int*) &a; 
 for ( i = 1; i < 5; ++i ) {
  /* Prüfe ob das Array-Element i größer ist als das von p referenzierte Element */ 
  if ( a[i] > *p ) {
   /* Lasse p auf das Array-Element i verweisen */ 
   p = (int*) &a[i]; 
  }
 }
 /* Gib das von p referenzierte Element als das größte aus: */ 
 printf("Maximum: %d\n", /*mein Code hier */ *p); 
 return 0; 
}


/* FUNKTIONIERT!! JAY!!! Also: 
Lasse p auf das 0-te Array Element verweisen: p = (int*) &a; 
gelöst über: p = (int*) &a;  
allerdings geht p = &a; auch, wirft aber dann eine Fehlermeldung. 

Prüfe ob das Array-Element i größer ist als das von p referenzierte Element: 
if ( a[i] > *p): ist das Element an stelle i des Arrays größer als der hinter dem zeiger p stehende Wert. 

Lasse p auf das Array-Element i verweisen: 
p = (int*)&a[i]: p zeigt auf (typecast int pointer) die Adresse vom element i des arrays a. 
*/
