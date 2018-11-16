/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:58:35 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 11:01:10 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	while (j < i)
	{
		str[i] = s[i];
		(*f)(i, str[i]);
		i++;
	}
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	ft_strmapi(argv[1], ft_putchar);
*	return (0);
*}
*/
