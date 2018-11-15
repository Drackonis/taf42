#include <stdio.h>

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int     i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		else
			i++;
	}
	return (1);
}
/*
*int    main(int argc, char **argv)
*{
*       argc++;
*       char *str1 = argv[1];
*       char *str2 = argv[2];
*       int i = ft_strnequ(str1, str2, 5);
*       printf("%d", i);
*       return (0);
*}
*/
