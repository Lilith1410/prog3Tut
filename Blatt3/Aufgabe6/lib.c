#include <stdio.h>
#include "lib.h"
#include <string.h>

struct int20 create20(char val[]){
 struct int20 temp; 
 int sLen = strlen(val)-1; 
 int i; 
 temp.number[LEN] = '\0'; 
 for ( i = LEN-1; i >= 0; --i) {
  if( sLen < 0) {
   temp.number[i] = '0'; 
  } else {
   temp.number[i] = val[sLen];
  } 
  --sLen;
 } 
 return temp; 
} 

struct int20 add20(struct int20 value1, struct int20 value2) {
 int moduloRemainder = 0; 
 int counter, nmb; 
 struct int20 tmp; 
 for ( counter = LEN -1 ; counter >= 0; --counter) {
  nmb = getInt(value1.number[counter]) + getInt(value2.number[counter]) + moduloRemainder;  
  moduloRemainder = 0; 
  if (nmb > 9) {
    moduloRemainder = 1; 
  } 
  tmp.number[counter] = getChar(nmb % 10); 
 }
 return tmp; 
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

void print20(struct int20 param){
 char c = '0'; 
 int i = 0; 
 while (param.number[i] == c) {
  ++i; 
 }
 for (i; i < LEN; ++i ){
  printf("%c", param.number[i]); 
 }
}



