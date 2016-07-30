/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 20:05:35 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/18 20:05:40 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i] != '\0')
	{
		c = i;
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		if (c == i)
		{
			return (0);
		}
	}
	return (1);
}
