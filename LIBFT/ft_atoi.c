#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		neg -= 2;
		i++;
	}
	if ((neg || str[i - 1] == '+') && (str[i] > '9' || str[i] < '0'))
		return (0);
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = (num *10) + str[i] - '0';
		i++;
	}
	return (num * neg);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	printf("%s\n", argv[1]);
*	printf("%d", ft_atoi(argv[1]));
*	return (0);
*}
*/