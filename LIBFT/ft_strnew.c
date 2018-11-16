/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:59:04 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 11:01:23 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strnew(size_t n)
{
	char		*str;
	unsigned int	i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * n)))
		return (NULL);
	else
	{
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
		str[i] = '\0';
		return (str);
	}
}
/*
*int	main(void)
*{
*	char	*str1;
*	str1 = ft_strnew(5);
*	str1[0] = 't';
*	str1[1] = 'e';
*	str1[2] = 's';
*	str1[3] = 't';
*	printf("%s", str1);
*	return (0);
*}
*/

