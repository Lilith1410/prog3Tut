#include <stdio.h>
#include "angest.h"
#include <stdlib.h>

int main(void){

  int anzahl, i; 
  angestellter* array; 
  
  scanf("%d", &anzahl); 
  array = (angestellter*)malloc(anzahl*sizeof(angestellter)); 

  for ( i = 0; i < anzahl; ++i) {
    scanf("%s %d %f", array[i].name, &array[i].personalnummer, &array[i].gehalt); // Warum wird hier bei array[i].name nicht &array[i].name verwendet? weil ein string ein array ist und daher nur ein zeiger übergeben werden muss und sonst eine zahl an die feste adresse geschrieben wird, aber strings haben unterschiedliche länge! 
  }
  for ( i = 0; i < anzahl; ++i) {
    printf("Eintrag %d: %s %d %.2f\n", i, array[i].name, array[i].personalnummer, array[i].gehalt); 
  }
  free(array); // Warum hier ein free-Array Aufruf? -> Weil oben Arrays-Größe über malloc im Heap angelegt wurde :) 
}
