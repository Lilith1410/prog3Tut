#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "baum.h"

int main(void){

  int i, j, k; 
  int read, numLines = 0; 
  char* tmp; 

  char knotenNamen[ARRAY_LENGTH][KNOT_NAME_LENGTH]; // Array of knots
  char vorgaengerKnoten[ARRAY_LENGTH][KNOT_NAME_LENGTH]; // Array of ParentKnots
  knot ergebnisArray[ARRAY_LENGTH]; 

  // lies zeilenweise ein
  do {
    read = scanf("%s %s", knotenNamen[numLines], vorgaengerKnoten[numLines]); // hier wird eingelesen + 2 arrays gefüllt
    numLines++; 
  } while ( read > 0);

  numLines--;  

  // Fülle Ergebnis-Array mit Knoten! 
  for( i = 0; i <= numLines; ++i) {
    strcpy(ergebnisArray[i].knotName, knotenNamen[i]); 
  }

  // Biege im Ergebnisarray die Parent-Pointer auf die Stellen im Ergebnisarray, wo sich die Parentknoten befinden
  for(i = 0; i < ARRAY_LENGTH; i++){
    for(k = 0; k < ARRAY_LENGTH; k++) {
      // wenn Wurzelknoten gefunden wurde: Da wo Vorgängerknoten = "<none>" stehen hat, Nullpointer setzen
      if (strcmp(vorgaengerKnoten[i], "<none>") == 0){ 
        ergebnisArray[i].parentKnot = NULL; 
      }
      // sonst wenn: name vorgängerknoten im ergebnisarray gefunden wurde
      else if(strcmp(vorgaengerKnoten[i], ergebnisArray[k].knotName) == 0) {
        // setze pointer aus ergebnisarray-parentknot auf adresse 
        ergebnisArray[i].parentKnot = &ergebnisArray[j]; 
      } 
    }

  }

  // Gibt das ErgebnisArray aus gemäß Formatierungswunsch
  printf("Anzahl Knoten: %d\n", numLines);
  for ( j = 0; j < numLines; ++j) {
    if (ergebnisArray[j].parentKnot == NULL) {
      printf("*%s -> -\n", ergebnisArray[j].knotName); 
    } else {
      printf(" %s -> %s\n", ergebnisArray[j].knotName, ergebnisArray[j].parentKnot);
    } 
  }
}
