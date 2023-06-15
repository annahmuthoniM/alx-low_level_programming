#include <stdio.h>

/**
 * main - Prints the size of various types based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of a char.%d bytes(s)\n", sizeof(char));

	printf("size of an int:%d bytes(s)\n", sizeof(int));

	printf("size of long int:%d bytes(s)\n, sizeof(long int));

	printf("size of long long int:%d bytes(s)\n, sizeof(long long int));

	printf("size of float:%d bytes(s)\n,sizeof(float));
	return (0);
}
	
