#include <stdio.h> 
#include "lib.h"

int main(void) {
 
 struct int20 a = create20("12345678901234567890"); 
 struct int20 b = create20("100"); 
 struct int20 sumAB = add20(a,b); 

 print20(a); printf("\n"); 
 print20(b); printf("\n"); 
 print20(sumAB); printf("\n"); 

 struct int20 c = create20("9700"); 
 struct int20 d = create20("422"); 
 struct int20 sumCD = add20(c,d); 

 print20(c); printf("\n"); 
 print20(d); printf("\n"); 
 print20(sumCD); printf("\n"); 
 
 return 0; 
}
