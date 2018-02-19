#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "baum.h"

int main(void){

  int i, j = 0, knotCount; 
  int read, numLines = 0; 

  knot* knots; // Array of knots
  knot* parentKnots; // Array of ParentKnots

  char* Knoten; 
  char* vorgängerKnoten; 

  knots = (knot*)malloc(ARRAY_LENGTH);
  parentKnots  = (knot*)malloc(ARRAY_LENGTH); 

 
  vorgängerKnoten = (char*)malloc(ARRAY_LENGTH); 
  Knoten = (char*)malloc(ARRAY_LENGTH); 

  // fülle das eindimensionale Array knots mit pointern auf max.20 char lange char-arrays
  for ( i = 0; i < ARRAY_LENGTH; i++) {
    knots[i] = // Zeiger auf Char-Array mit bis zu 20 Stellen
  }

  // lies zeilenweise aus
  do {
    read = scanf("%s %s", Knoten[j], vorgängerKnoten[j]); 
    numLines++; 
    j++; 
  } while ( read > 0){
    numLines--; 
  }; 
  
  
  // printe resulte aus, achte auf geänderte Anzeige des Mutterknotens!  
  for(i = 0; i < arrayLength; ++i) {
    printf("%d. Stelle: %c", i, knotName[i]); 
  }
}



