#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
*int	main(void)
*{
*	int i = ft_isdigit(42);
*	printf("%d", i);
*	return (0);
*}
*/

