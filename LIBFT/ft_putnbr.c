#include <stdio.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	int	nb;
	int	t;
	char	c;

	nb = n;
	t = 0;
	if (nb < 0)
	{
		c = '-';
		write(1, &c, 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		t = nb % 10;
		c = t + 48;
		ft_putnbr(nb / 10);
	}
	else
		c = nb + 48;
	write(1, &c, 1);
}
/*
**int	main(void)
**{	
**	ft_putnbr(-12345);
**	return (0);
**}
*/