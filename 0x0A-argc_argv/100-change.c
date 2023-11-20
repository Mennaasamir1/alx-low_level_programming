#include <stdio.h>
#include <stdlib.h>
/**
 * calcMin - calculates the minimum amount of money
 * @money: the amount of money
 * Return: minimum number
 */

int calcMin(int money)
{
	int coins[] =  {25, 10, 5, 2, 1};
	int num = 0;
	unsigned int i;

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		num += money / coins[i];
		money %= coins[i];

	}

	return (num);
}
/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer to an array of string
 * Return: the minimun number of coins
 */
int main(int argc, char *argv[])
{
	int cents, mincoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	mincoins = calcMin(cents);

	printf("%d\n", mincoins);

	return (0);
}
