#include <stdio.h>

void	ft_striter(char *s, void (*f)(char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(&s[i]);
		i++;
	}

}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	ft_striter(argv[1], ft_putchar);
*	return (0);
*}
*/

