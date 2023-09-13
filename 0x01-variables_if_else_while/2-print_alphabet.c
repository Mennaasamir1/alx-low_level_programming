#include <stdio.h>
/**
 * main - this is the entry point of the porgram
 *
 * Description :the  main function prints random numbers
 *
 * Return: is always 0 when succes
 */

int	main(void)
{
	char	alphabet;


	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
