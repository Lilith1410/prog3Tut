#include <stdio.h> 

void printOut(int a){
 int i,j, tmp; 
 i = 0; 
 j = 0; 

 for (i; i < 10; i++) {
  for (j; j<10; j++) {
   if( i == 0) {
    printf(" "); 
   }
   tmp = i*10+j; 
   printf("%d", tmp); 
   if ((tmp)%a==0) {
    printf("# "); 
   } else {
    printf(" "); 
   } 
  }
  printf("\n"); 
 }
}
