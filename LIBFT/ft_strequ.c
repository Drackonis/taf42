#include <stdio.h>

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		else
			i++;
	}
	return (1);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char *str1 = argv[1];
*	char *str2 = argv[2];
*	int i = ft_strequ(str1, str2);
*	printf("%d", i);
*	return (0);
*}
*/

