#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[]){
  int zahl1, zahl2; 
  char* endptr1 = NULL; 
  char* endptr2 = NULL; 
  errno = 0;  
  if(argc != 3) {
    printf("Benutzung: ./plus <zahl> <zahl>\n"); 
    return -1; 
  }
  zahl1 = strtol(argv[1], &endptr1, 10);
  zahl2 = strtol(argv[2], &endptr2, 10);  
  
  if(strlen(endptr1)!=0){
    printf("Kann '%c' nicht in Zahl umwandeln: Falsches Format\n", *argv[1]);
    printf("Klammer1"); 
  } else if(strlen(endptr2)!=0) {
    printf("Kann '%c' nicht in Zahl umwandeln: Falsches Format\n", *argv[2]);
    printf("Klammer2");
  } else if(errno != 0) {
    printf("Kann %s nicht in Zahl umwandeln: %s\n", argv[1], strerror(errno)); 
  } else {
    printf("%d + %d = %d\n",zahl1, zahl2, zahl1+zahl2); 
  }
  return 0; 
}


