/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:56:10 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 11:05:10 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
**int	main(void)
**{
**	int i = ft_isalnum(42);
**	printf("%d", i);
**	return (0);
**}
*/
