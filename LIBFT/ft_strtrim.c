/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:59:39 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 11:38:12 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	while (s1[j])
		j++;
	while (s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t')
		i++;
	while (s1[j] == ' ' || s1[j] == '\n' || s1[j] == '\t' || s1[j] == '\0')
		j--;
	if (!(str = (char*)malloc(sizeof(char) * (j - i))))
		return (NULL);
	while (i <= j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
/*
**int    main(int argc, char **argv)
**{
**       argc++;
**       char *str1 = argv[1];
**       str1 = ft_strtrim(str1);
**       printf("%s", str1);
**       return (0);
**}
*/
