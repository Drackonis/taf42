#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int	i;
	int	j;
	int	t;
	int	neg;
	char	*str;

	j = 0;
	neg = 0;
	if (n < 0)
	{
		neg++;
		j++;
		n *= -1;
		i = n;
	}
	while (i > 9)
	{
		i /= 10;
		j++;
	}
	j++;
	if (!(str = (char*)malloc(sizeof(char) * j)))
		return (NULL);
	i = n;
	str[j] = '\0';
	while (i > 9)
	{
		j--;
		t = i % 10;
		str[j] = (char)t;
	}
	str[j] = (char)i;
	j--;
	if (neg)
		str[j] = '-';
	return (str);
}

int	main()
{
	int i = 123456789;
	char *str1 = ft_itoa(i);
	printf("%s\n", str1);
	return (0);
}
