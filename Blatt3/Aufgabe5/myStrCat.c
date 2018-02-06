#include <stdio.h>


char* stringConcat(char* charAr1, char* charAr2) {
 int i,j; 
 int l1 = sizeof(charAr1); // sizeof geht hier nicht, stattdessen strlen um länge des arrays rauszufinden. 
 int l2 = sizeof(charAr2); 
 /* sizeof gibt gesamtlänge des arrays in bytes zurück, dies teilen durch größe von einem element, damit anzahl der im array befindlichen elemente ermittelt werden kann. geht nur an dieser stelle nicht. */ 

 char charAr3[l1+l2]; // es wird ein Array benötigt, dass so lang ist, wie Array1 + Array2 damit der Inhalt von beiden dort abgespeichert werden kann. 
 for ( i = 0; i < l1; i++) {
  charAr3[i] = charAr1[i]; 
 } // Diese Schleife soll die Inhalte aus Array1 in das neue, leere Array kopieren. 
 for ( j = 0; j < l2; j++) {
  charAr3[i+j] = charAr2[j]; 
 } // Diese Schleife soll die Inhalte aus Array2 in das neue, leere Array kopieren. 
 return (char*)charAr3; // Hier funktioniert was noch nicht. wird so korrekt ein pointer zurückgegeben? 
}

/* Aufgabe fordert eigentlich, dass Speicherbereich nach charAr1 erweitert wird, komme was wolle, egal ob dabei speicher von anderen programminhalten überschrieben wird. */ 
/* ggf. beide Lösungen (meine und die von Herrn Peine geforderte aufgabenstellung) nochmal machen! */ 
// string noch beenden zum schluss, weil strlen gibt länge vom string ohne null-byte zurück 


int main(void){
 char s1[] = "Valerie "; 
 char s2[] = "Vaske"; 
 char s3[] = stringConcat((char*)s1, (char*)s2); // hier kommt noch eine Fehlermeldung. Die Länge des Arrays muss wahrscheinlich zur Laufzeit bereits bekannt sein. Alternativ könnte man eventuell auch auf das Anlegen eines neuen Arrays verzichten und die Rückgabe des Pointers von der Funktion stringConcat nutzen, um diesen direkt auszuprinten. 
 printf("%s\n", s3);  
 return 0; 
}
