#include <stdio.h> 

int get_input(char* prompt){
 int number; 
 printf("%s", prompt);
 scanf("%d", &number);
 return number;   
}
