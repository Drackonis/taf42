/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:53:05 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/09 16:53:08 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str2[i])
		i++;
	while (j < i && str1[j])
	{
		str1[j] = str2[j];
		j++;
	}
	if (str1[j])
		while (str1[j++])
			str1[j] = '\0';
	return (str1);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char *str1 = argv[1];
*	char *str2 = argv[2];
*	ft_strcpy(str1, str2);
*	printf("%s", str1);
*	return (0);
*}
*/
