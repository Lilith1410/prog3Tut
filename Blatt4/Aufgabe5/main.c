#include <stdio.h> 

int main(void){
 
 int a[] = {8,13,7,2,99}; 
 int b[5]; 

 int* ip = &a[4]; 

 b[0]=*ip;
 ip--;  
 b[1]=*ip;
 ip--;
 b[2]=*ip;
 ip--;
 b[3]=*ip;
 ip--;
 b[4]=*ip;

 

 int i; 
 for(i = 0; i < 5; i++){
  printf("%d\n", b[i]); 
 }
 
 return 0; 
}

/* Aufgabe gelöst durch Addressatithmetik: 
Int-Zeiger cp zeigt auf die Adresse an der Stelle a[4] = letzte Stelle des Arrays a. 
Durch ip-- wird die adressauflistung rückwärtig durchlaufen, d.h. das array von hinten nach vorne. 
Ausgabe entspricht den Anforderungen. 
