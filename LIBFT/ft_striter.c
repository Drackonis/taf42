/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:58:10 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 11:01:01 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striter(char *s, void (*f)(char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(&s[i]);
		i++;
	}

}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	ft_striter(argv[1], ft_putchar);
*	return (0);
*}
*/

