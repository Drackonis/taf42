#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	const char	*src1;

	i = 0;
	src1 = src;
	while (i < n)
	{
		dest[i] = src1[i];
		i++;
	}
	return (dest);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char *str1 = argv[1];
*	char *str2 = argv[2];
*	ft_strncpy(str1,str2,5);
*	printf("%s", str1);
*	return (0);
*}
*/
