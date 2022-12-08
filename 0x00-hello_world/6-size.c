#include <stdio.h>

/**
 * main: prints isze of various datatypes
 * return: 0 if exited properly, otherwise non-zero
 */

int main(void){
	pritnf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	pritnf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
