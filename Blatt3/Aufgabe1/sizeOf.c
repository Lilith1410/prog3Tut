#include <stdio.h> 

int main(void) {
 printf("Size of short		: 	%ld Bytes\n", sizeof(short));
 printf("Size of int		: 	%ld Bytes\n", sizeof(int));
 printf("Size of long		: 	%ld Bytes\n", sizeof(long));
 printf("Size of float		: 	%ld Bytes\n", sizeof(float));
 printf("Size of double		: 	%ld Bytes\n", sizeof(double));
 printf("Size of long double	: 	%ld Bytes\n", sizeof(long double));
 printf("Size of long int	: 	%ld Bytes\n", sizeof(long int));
 printf("Size of char		: 	%ld Bytes\n", sizeof(char));
 printf("Size of charPointer	: 	%ld Bytes\n", sizeof(char*));
 return 0; 
}
