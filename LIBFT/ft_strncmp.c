#include <stdio.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int     i;

        i = 0;
        while (i < n && (s1[i] || s2[i]))
        {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
                        i++;
	}
	return (0);
}
/*
*int    main(int argc, char **argv)
*{
*       argc++;
*       char *str1 = argv[1];
*       char *str2 = argv[2];
*       int i = ft_strncmp(str1, str2, 5);
*       printf("%d", i);
*       return (0);
*}
*/
