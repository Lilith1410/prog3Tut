#include <stdio.h> 
#include "printOut.h"

void frageZahlAb() {gcc 
 int a; 
 printf("Bitte positive ganze Zahl eingeben: \n");
 scanf("%d", &a);
 printOut(a); 
}


int main(void) {
 frageZahlAb(); 
 return 0; 
}
