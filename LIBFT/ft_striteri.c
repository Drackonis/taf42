#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	ft_striteri(argv[1], ft_putchar);
*	return (0);
*}
*/
