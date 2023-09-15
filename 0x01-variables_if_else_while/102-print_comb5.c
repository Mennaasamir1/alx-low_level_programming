#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: putchar prints numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
	for (j = i + 1; j <= 99; j++)
	{
		int tens1 = i / 10;
		int ones1 = i % 10;
		int tens2 = j / 10;
		int ones2 = j % 10;

		if (tens1 == 0)
			putchar('0');
		else
			putchar('0' + tens1);

		putchar('0' + ones1);
		putchar(' ');

		if (tens2 == 0)
			putchar('0');
		else
			putchar('0' + tens2);

		putchar('0' + ones2);

		if (i != 99 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}

	return (0);

}
