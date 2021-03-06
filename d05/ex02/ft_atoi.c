/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_at0i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 09:54:23 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/18 09:54:26 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		num;
	int		sign;
	char	p;

	sign = 1;
	num = 0;
	p = 0;
	while ((str[p] <= '0') && (str[p] >= '9'))
	{
		p++;
	}
	if (str[0] == '-')
	{
		sign = -1;
		p++;
	}
	while ((str[p] >= '0') && (str[p] <= '9'))
	{
		num = num * 10 + (str[p] - '0');
		p++;
	}
	if (sign == -1)
	{
		return (-num);
	}
	return(num);
}
