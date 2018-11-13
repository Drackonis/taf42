#include <stdlib.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
		if (dest[i - 1] == c)
			return (&dest[i]);
	}
	return (NULL);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char *str1 = argv[1];
*	char *str2 = argv[2];
*	ft_memccpy(str1, str2, 35, 5);
*	printf("%s",str1);
*	return (0);	
*}
*/
