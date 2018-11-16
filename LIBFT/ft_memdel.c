/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkergast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:57:18 by rkergast          #+#    #+#             */
/*   Updated: 2018/11/16 11:12:42 by rkergast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_memdel(void **ptr)
{
	free(ptr);
	ptr = NULL;
}
/*
**int	main(int argc, char **argv)
**{
**	argc++;
**	void	**str1 = argv[1];
**	ft_memdel(str1);
**	printf("%s", str1);
**	return (0);
**}
*/
