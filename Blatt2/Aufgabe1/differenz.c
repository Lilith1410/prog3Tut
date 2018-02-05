#include "input.h"

int differenz(void){
 int a, b, result; 
 a = get_input("Minuend: "); 
 b = get_input("Subtrahend: ");
 result = a - b; 
 return result; 
}
