#include <stdio.h>
#include <stdlib.h>

int main(void){

  FILE *fptr; 
  char c[100]; 
  
  //char* array = (char*) malloc(50 * sizeof(char)); // macht das 50 Speicherzellen frei oder in jeder Speicherzelle Platz für 50 char's? 

  
  
  do {
    scanf("%s %s", ); 

  }

  while  



  if( (fptr = fopen("test.txt", "r")) == NULL) {
    printf("Error opening file!");
    exit(1);  
  }
  fscanf(fptr, "%[^\n]", c); 
  

  printf("Data from the file: \n%s", c); 

  fclose(fptr); 

  return 0; 
}
