/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:13:56 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:13:59 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pointer(unsigned long long c, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_put_pointer(c / 16, count);
		ft_put_pointer(c % 16, count);
	}
	else
		*count += ft_putcharp(base[c], 1);
}
