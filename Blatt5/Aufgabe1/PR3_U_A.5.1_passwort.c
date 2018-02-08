#include <stdio.h>
#include <string.h>

int main(void) {
    int i; 
    char eingabe[32];
    char passwort[32] = "GeHeIm";  /* Dem Programmbenutzer unbekannt */

    /* Ggf. muessen Sie die Reihenfolge der beiden vorstehenden 
       Array-Definitionen umkehren, um den unten beschriebenen Effekt
       zu beobachten (plattformabhaengig). Auf den Pool-PCs ist die obige
       Reihenfolge die richtig, um den gewuenschten Effekt zu beobachten.
    */

    printf("Bitte Passwort fuer den Hochsicherheitsbereich eingeben:\n");

    /* read all including spaces and tabs to the end of the line */
    scanf("%[^\n]", eingabe);

    for (i=0; i<64; i++) {
      printf("%3d (%p) : %02X %c\n", i, eingabe+i, (unsigned char)eingabe[i], eingabe[i]); 
    }

    if (!strncmp(eingabe, passwort, strlen(passwort))) {
      printf("Passwort korrekt - Willkommen im Hochsicherheitsbereich!\n");
      return 0;
    } else {
      printf("Passwort falsch - Zugang verweigert!\n");
      return -1;
    }
}
