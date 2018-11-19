/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:56:31 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:03:14 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char		t;
	int		neg;
	char	*str;

	j = 1;
	neg = 0;
	if (n < 0)
	{
		neg++;
		j++;
		n *= -1;
	}
	i = n;
	while (i > 9)
	{
		i /= 10;
		j++;
	}
	if (!(str = (char*)malloc(sizeof(char) * j)))
		return (NULL);
	i = n;
	str[j] = '\0';
	while (i > 9)
	{
		j--;
		t = i % 10;
		str[j] = t + '0';
		printf ("//%d|%d//", j, i);
		printf ("||%c", str[j]); 
		i /= 10;
	}
	j--;
	str[j--] = i + '0';
	if (neg)
		str[j] = '-';
	return (str);
}
/*
**int	main()
**{
**	int i = -987654321;
**	char *str1 = ft_itoa(i);
**	printf("\n|\n%s\n|\n", str1);
**	return (0);
**}
*/
