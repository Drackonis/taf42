#include <stdio.h>
#include "libft.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	ft_putstr(argv[1]);
**	return (0);
**}
*/
