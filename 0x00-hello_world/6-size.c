#include <stdio.h>
/**
 * main - is the main function
 *
 * Return: always 0
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(double));
   printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
