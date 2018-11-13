#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char *p;

	p = str;
	while (n--)
		*p++ = '\0';
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char *str1 = argv[1];
*	ft_bzero(str1, 5);
*	printf("%s", str1 + 4);
*	return (0);
*}
*/
