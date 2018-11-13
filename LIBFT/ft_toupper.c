#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
*int	main(void)
*{
*	int i = ft_toupper((int)'a');
*	printf("%d", i);
*	return (0);
*}
*/
