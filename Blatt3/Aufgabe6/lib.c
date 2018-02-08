#include <stdio.h> 
#include "lib.h"
#include <string.h>

struct int20 create20(char val[]){
 struct int20 temp; 
 strcpy(temp.number, val); 
 return temp; 
} 

void print20(char* string){
 printf("%s", string); 
}

struct int20 add20(struct int20 value1, struct int20 value2){

 int moduloRemainder = 0; 
 int counter,i; 
 
 int array1[] = fillIntArray(value1.number); 
 int array2[] = fillIntArray(value2.number);  
  
 for (  counter = 20; counter > -1; --counter) {
  if ( moduloRemainder == 1) {
    array1[counter] += 1; 
    moduloRemainder = 0; 
  }
  array1[counter] += array2[counter]; 
  if (array1[counter] > 9) {
    moduloRemainder = 1; 
    array1[counter] = array1[counter] % 10; 
  } 
 }

 char s1[]; 

 for ( i = 0; i < 20; ++i ) {
  s1[i] = getChar(array1[i]); 
 }

 return create20(s1); 

} 


/* takes string, creates array w 20 cells, fills array backwards w letters of string. if string is cleared before array is filled, rest cells get filled w 0's. */ 
int ar[] fillIntArray( char* string) {
 int i = 20; 
 int tmpArr[20]; 
 int sLen = strlen(string); 
 for (i; i > 0; --i) {
   if ( sLen == 0) {
   tmpArr[i] = 0; 
   }
  tmpArr[i] = getInt(string[sLen]); 
  --sLen; 
 }
 return tmpArr; 
}



/* takes int, returns matching char-value */ 
char getChar(int c) {
 char cAsInt = c + '0'; 
 return cAsInt; 
}

/* takes Char, returns matching int-value */ 
int getInt(char c) {
 int cAsInt = c - '0'; 
 return cAsInt; 
}



