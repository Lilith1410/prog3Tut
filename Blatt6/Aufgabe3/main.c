#include <stdio.h>
#include <string.h>

double mwstVomNetto(double i){
   return (double)((i/100)*19); 
}

double bruttoVomNetto(double i){
  return (double)(((i/100)*19)+i); 
}

double nettoVomBrutto(double i){
  return (double)((i/119)*100); 
}

int main(void){
  int wahl = 4; 
  float betrag = 0;
  double ergebnis = 0;  
  while(wahl!=3){
    printf("Ihre Eingabe: \n");
    printf("\t<function> [<betrag>]\n");
    printf("Bedeutung von <funktion>: 0 = MwSt. vom Netto, 1 = Brutto vom Netto, 2 = Netto vom Brutto, 3 = Ende\n");
    printf("z.B. 0 99.95\t(für die Berechnung der Mehrwertsteuer von 99.95 netto\n");
    scanf("%d %f", &wahl, &betrag);
    if(wahl==0) {
      ergebnis = mwstVomNetto(betrag); 
      printf("MwSt. vom Netto: %.2f\n", ergebnis); 
    } else if (wahl==1) {
      ergebnis = bruttoVomNetto(betrag); 
      printf("Brutto vom Netto: %.2f\n", ergebnis); 
    } else if (wahl==2) {
      ergebnis = nettoVomBrutto(betrag); 
      printf("Netto vom Brutto: %.2f\n", ergebnis);  
    } else if (wahl==3) {
      return 0; 
    }
  }
  return 0; 
}
