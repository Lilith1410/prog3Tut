#include <stdio.h> 

double matrix_elem_sum(double nDimensionaleMatrix[], int laenge, int einDimensionalesArray[] ) {
// hier müssen die Parameter noch angepasst werden! 
 double result = 0.0; 

 int dimension, i, j; 
 dimension = 1; 

 /* Durchlaufe das einDimensionaleArray mit der durc den 2. Parameter bekannt gemachten Länge
 Multipliziere die Werte in diesem Array ( = die Dimensionen des nDimensionalenArrays) miteinander
 so lange, bis i nicht mehr kleiner als laenge */ 
 for (i = 0; i < laenge; ++i) {
  dimension *= einDimensionalesArray[i]; 
  printf("%d\n", dimension); 
 }
 
 /* durchlaufe das nDimensionaleArray bis zum Speicherpunkt "Dimension" (= Endpunkt der Speicherzellen- 
 allokierung im Speicher) und addiere die Werte jeweils auf, um ein Result zu erhalten. */ 
 for( j = 0; j < dimension; ++j) {
 result += nDimensionaleMatrix[j];  
 }
 
 return result; 
}

int main(void) {

 double matrix2d[3][2] = { {111,112}, {121,122}, {131,132} }; 
 int lengths2d[2] = {3,2}; 

 double matrix3d[2][3][4] = {
    { {111, 112, 113, 114}, {121, 122, 123, 124}, {131, 132, 133, 134} },
    { {211, 212, 213, 214}, {221, 222, 223, 224}, {231, 232, 233, 234} }
  };
 int lengths3d[3] = {2,3,4}; 

 printf("sum of matrix2d = %f\n", matrix_elem_sum((double*)matrix2d, 2, lengths2d)); // gibt 729 aus
 printf("Sum of matrix3d = %f\n", matrix_elem_sum((double*)matrix3d, 3, lengths3d)); // gibt 4140 aus
 return 0; 
} 
