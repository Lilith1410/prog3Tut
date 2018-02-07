#include "input.h"
#include "differenz.h"

int differenz(void){
 int a, b, result; 
 a = get_input("Minuend: "); 
 b = get_input("Subtrahend: ");
 result = a - b; 
 return result; 
}
