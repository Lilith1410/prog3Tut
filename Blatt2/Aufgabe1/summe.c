#include "input.h"

int summe(void){
 int a, b, result;
 a = get_input("Erster Summand: "); 
 b = get_input("Zweiter Summand: "); 
 result = a+b;  
 return result; 
}
