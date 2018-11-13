#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
*int	main(void)
*{
*	int i = ft_tolower((int)'A');
*	printf("%d", i);
*	return (0);
*}
*/
