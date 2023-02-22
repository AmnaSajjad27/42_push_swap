/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:14:57 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:14:59 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrp(int c, int *count)
{
	long int	k;

	k = c;
	if (k < 0)
	{
		*count += write(1, "-", 1);
		k *= -1;
	}
	if (k > 9)
	{
		ft_putnbrp(k / 10, count);
		ft_putnbrp(k % 10, count);
	}
	else
		*count += ft_putcharp(k + 48, 1);
}
