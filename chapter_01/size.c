

#include <stdio.h>

int main(void)
{
	// %zu is the format specifier for type size_t
	printf("Size of int   : %zu\n", sizeof(int));
	printf("Size of char  : %zu\n", sizeof(char));
	printf("Size of float : %zu\n", sizeof(float));
	printf("Size of double: %zu\n", sizeof(double));
}