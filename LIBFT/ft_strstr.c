#include <stdio.h>

char	*ft_strstr(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s2[j] == s1[i + j])
			{
				if (s2[j + 1] == '\0')
					return (&s1[i]);
				else
					j++;
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