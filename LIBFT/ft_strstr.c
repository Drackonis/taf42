#include <stdio.h>

char	*ft_strstr(char *s1, char *s2)
{
	int	i;
	int	z;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (s2);
	if (s2[0] == '\0')
		return (s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			z = 0;
			while (s2[z] == s1[i + z])
			{
				if (s2[z + 1] == '\0')
					return (&s1[i]);
				else
					z++;
			}	
		}
		i++;
	}
	return (NULL);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char *str1 = argv[1];
*	char *str2 = argv[2];
*	str1 = ft_strstr(str1, str2);
*	printf("%s", str1);
*	return (0);
*}
*/
