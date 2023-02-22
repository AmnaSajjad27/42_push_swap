/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:15:19 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:15:21 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrp(const char *str, int fd)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!str)
	{
		count += ft_putstrp("(null)", fd);
		return (count);
	}
	while (str[i])
	{
		count += write(fd, &str[i], 1);
		i++;
	}
	return (count);
}
