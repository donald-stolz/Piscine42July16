/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:12:08 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 14:12:13 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_is_negative(int n)
{
	if ( n < 0 )
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
	ft_putchar('\n');
}