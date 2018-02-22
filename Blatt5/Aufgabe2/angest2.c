#include <stdio.h>
#include <stdlib.h>
#include "angest.h"

int main(void) {

  int length = 10;
  int i, userInput;  
  char end = 'a'; 
  char tmpName[NAME_LEN]; 
  int tmpPnr; 
  float tmpGehalt; 
  
  // Array von Angestellten-Zeigern: 
  angestellter* array[length];

  // Pointer im Array mit NullPointern initialisieren
  for ( i = 0; i < length; ++i) {
    array[i]=NULL; 
  }
  
  while(end != 'b') {
    printf("Zahl eingeben, dessen Daten du herausfinden möchtest: \n"); 
    scanf("%d", &userInput);  

    if( array[userInput] == NULL ) {
      // Pointer an der Array-Stelle ein Null-Pointer ist

      // Einen Angestellten anlegen: 
      array[userInput] = (angestellter*)malloc(sizeof(angestellter)); 
      //array[userInput]->personalnummer = array[i-1]+1; // Wert von der Stelle i-1 aus Array + 1 erhöhen 
 
      printf("Bitte Personaldaten angeben: Name, Personalnummer, Gehalt. \n"); 
      scanf("%s", array[userInput]->name); 
      scanf("%d", &(array[userInput]->personalnummer)); 
      scanf("%f", &(array[userInput]->gehalt)); 
      printf("Danke! \n"); 

    } else {
      //Pointer an der Array-Stelle kein Null Pointer ist
      printf("Lösche Daten an der Stelle %d\n", userInput); 
      free(array[userInput]); 
      array[userInput]=NULL; // Lass den Pointer einfach zum Nullpointer werden :) 
      printf("Daten gelöscht. \n"); 
    }

    printf("Programm beenden? Bitte drücke: b. \n"); 
    scanf("%c", &end); 
  }

}
