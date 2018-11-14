#include <stdio.h>

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char	*str1 = argv[1];
*	ft_strclr(str1);
*	printf("%s", str1);
*	return (0);
*}
*/
