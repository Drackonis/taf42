#include <stdio.h>

char	*ft_strncat(char *c1, char *c2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (c1[i])
		i++;
	while (n--)
	{
		c1[i + j] = c2[j];
		j++;
	}
	c1[i + j] = '\0';
	return (c1);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char *str1 = argv[1];
*	char *str2 = argv[2];
*	ft_strncat(str1, str2, 5);
*	printf("%s", str1);
*	return (0);
*}
*/
