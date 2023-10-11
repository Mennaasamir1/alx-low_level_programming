#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int count;

	if(argc > 1)
	{
	      	for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n",count, argv[count]);
		}
	}

	else
	{
		printf("welcome to the void\n");
	}

	return (0);
}
