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
/*#include "libft.h"*/

static int	ft_split_parts(char const *s, char c)
{
	int	i;
	int	n;
	int	t;

	i = 0;
	n = 0;
	t = 0;
	while (s[i])
	{
		if (t == 1 && s[i] == c)
			t = 0;
		if (t == 0 && s[i] != c)
		{
			t = 1;
			n++;
		}
		i++;
	}
	return (n);
}

static char	**ft_split_len(char **str, char const *s, char c)
{
	int	i;
	int	n;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			n = 0;
			while (s[i] != c && s[i] != '\0')
			{
				n++;
				i++;
			}
			if (!(str[w] = (char*)malloc(sizeof(char) * (n + 1))))
				return (NULL);
			w++;
		}
	}
	return (str);
}

static char	**ft_fill_str(char **str, char const *s, char c)
{
	int	i;
	int	t;
	int	w;

	i = 0;
	t = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i])
			{
				str[w][t] = s[i];
				i++;
				t++;
			}
			str[w][++t] = '\0';
			w++;
		}
	}
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	int		w;
	char	**str;

	w = 0;
	printf("%c", '1');
	w = ft_split_parts((const char *)s ,c);
	if (!(str = (char**)malloc(sizeof(char*) * w)))
		return (NULL);
	printf("%c", '2');
	ft_split_len(str, (char const *)s, c);
	printf("%c", '3');
	ft_fill_str(str, (char const *)s, c);
	printf("%c", '5');
	return (str);
}

int    main(int argc, char **argv)
{
	argc++;
	printf("%c", '0');
	char **strx = ft_strsplit(argv[1], ' ');
	printf("%c", '6');
	printf("%s\n", strx[0]);
	printf("%s\n", strx[1]);
	//printf("%s\n", strx[3]);
	printf("%c", '7');
	return (0);
}
