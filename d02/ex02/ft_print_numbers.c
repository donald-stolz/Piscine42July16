/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:11:47 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 14:11:51 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');

}