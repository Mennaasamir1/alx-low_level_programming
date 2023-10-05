#include <stdio.h>
#include <string.h>

int	main(void)
{
	
	char	s[] = "ANFNFJKL12345678";
	char	num[] = "0123455778";
	
	char *pp =  strpbrk(s, num);

	printf("%s\n", pp);

	return (0);
}
