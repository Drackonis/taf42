/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:58:29 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 11:26:53 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	while (j < i)
	{
		str[i] = s[i];
		(*f)(str[i]);
		i++;
	}
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	ft_strmap(argv[1], ft_putchar);
**	return (0);
**}
*/
