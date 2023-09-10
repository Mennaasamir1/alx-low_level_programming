#include <stdio.h>
/**
 * main - this is the main function
 * using sizeof to print the size of various types
 * Return: always 0
 */
int main(void)
{
	printf("size of a char: %u byte(s)\n", sizeof(char));
	printf("size of an int: %u byte(s)\n", sizeof(int));
	printf("size of long int: %u byte(s)\n", sizeof(long int));
	printf("size of long long int: %u byte(s)\n", sizeof(long long int));
	printf("size of float: %u byte(s)\n", sizeof(float));
	return (0);

}
