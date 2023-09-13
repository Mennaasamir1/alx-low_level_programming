#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using putchar to print letters
 *
 * Return: always 0
 */

int main(void)
{
	char	alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
