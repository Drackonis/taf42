#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
*int	main(void)
*{
*	int i = ft_isalpha(42);
*	printf("%d", i);
*	return (0);
*}
*/
