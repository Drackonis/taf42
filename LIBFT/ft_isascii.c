#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
*int	main(void)
*{
*	int i = ft_isascii(42);
*	printf("%d", i);
*	return (0);
*}
*/
