#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
	printf("size of a char: %zu byte\n", sizeof(char));
	printf("size of an int: %zu byte\n", sizeof(int));
	printf("size of long int: %zu byte\n", sizeof(long int));
	printf("size of long long int: %zu byte\n", sizeof(long long int));
	printf("size of float: %zu byte\n", sizeof(float));
	return (0);

}
