/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:47:51 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 19:47:55 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	int		count;
	char	c;

	n = 0;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	i--;
	while (i >= count / 2)
	{
		c = str[n];
		str[n] = str[i];
		str[i] = c;
		n++;
		i--;
	}
	return (str);
}
