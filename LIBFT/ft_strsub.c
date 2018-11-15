#include <stdio.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int i, size_t n)
{
	unsigned int    j;
	char	*str;

	j = 0;
	if (!(str = (char*)malloc(sizeof(char) * n)))
		return (NULL);
	while (j < n)
	{
		str[j] = s[i + j];
		j++;
	}
	return (str);
}
/*
*int    main(int argc, char **argv)
*{
*       argc++;
*       char *str1 = argv[1];
*       char *str2 = argv[2];
*       str2 = ft_strsub(str1, 3, 5);
*       printf("%s", str2);
*       return (0);
*}
*/
