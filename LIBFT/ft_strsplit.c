/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:59:25 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 14:07:04 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		w;
	int		t;
	char	**str;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			w++;
			while (s[i] != c || s[i])
				i++;
		}
	}
	if (!(str = (char**)malloc(sizeof(char*) * w)))
		return (NULL);
	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			t = 0;
			while (s[i] != c || s[i])
			{
				t++;
				i++;
			}
			if (!(str[w] = (char*)malloc(sizeof(char) * t)))
				return (NULL);
			w++;
		}
	}
	i = 0;
	w = 0;
	t = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c || s[i])
			{
				str[w][t] = s[i];
				i++;
				t++;
			}
			w++;
		}
	}
	return (str);
}
/*
**int    main(int argc, char **argv)
**{
**       argc++;
**      char **strx = ft_strsplit(argv[1], ' ');
**       printf("%s \n %s \n %s", strx[1], strx[2], strx[3]);
**       return (0);
**}
*/
