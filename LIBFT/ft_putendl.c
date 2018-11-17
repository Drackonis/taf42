#include <stdio.h>
#include "libft.h"

void    ft_putendl(char const *s)
{
	int     i;
	char	b;

	i = 0;
	b = '\n';
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, &b, 1);
}
/*
**int   main(int argc, char **argv)
**{
**      argc++;
**      ft_putendl(argv[1]);
**      return (0);
**}
*/
