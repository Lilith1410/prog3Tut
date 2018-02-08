#include <stdio.h> 

void tausche_int(int** a, int** b){ // die zwei erhaltenen Adressen werden als Parameter entgegen genommen: Warum als doppelte Zeiger und nicht als einfache Zeiger? 
 int* tmp = *a; // Zeiger tmp zeigt auf den dereferenzierten Doppelzeiger von A = den Zeiger von a, der auf den Wert von a zeigt. Tmp zeigt jetzt genau dahin, wo etwas geändert werden soll (der a zeiger soll ja umgebogen werden) 
 *a = *b; // dereferenzierter Zeiger a(einfacher zeiger a) zeigt auf einfachen zeiger b
 *b = tmp; // einfacher zeiger b zeigt auf einfachen zeiger tmp (sowieso schon immer einfacher zeiger gewesen) 
}

/* nochmal genau nach dem hintergrund fragen, wie kann man sich das am einfachsten vorstellen */ 
/* achso und bei ausführung kackt das programm ab xD stack smashin detected! */ 

/* -> ich BRAUCHE die Doppelpointer an der Stelle als Parameter, da ich sonst beim Dereferenzieren den Wert ändern würde. ich will aber beim dereferenzieren den pointer, also die hinterlegte adresse ändern. 
Weiterführende Frage: Warum geht es dann also nicht mit einfachen Pointern und ohne dereferenzierung? */ 

int main(void) {
 int i = 1; int j = 2; 
 
 printf("i = %d, j = %d\n", i, j); /* Gibt 1 und 2 aus. */
 tausche_int(&i, &j); // Übergib zwei Adressen an die Funktion "tausche_int"
 printf("i = %d, j = %d\n", i, j); /* Gibt 2 und 1 aus. */ 
 return 0; 
}
