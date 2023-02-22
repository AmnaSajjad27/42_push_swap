/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxmin_ctrl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:10:54 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:10:56 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	maxmin_int(t_data *p_s)
{
	if (p_s->maxmin < -2147483648)
	{
		free(p_s->seta);
		free(p_s->setb);
		free(p_s);
		ft_printf("Error\nMIN int error!");
		exit(1);
	}
	else if (p_s-> maxmin > 2147483647)
	{
		free(p_s->seta);
		free(p_s->setb);
		free(p_s);
		ft_printf("Error\nMAX int error!");
		exit(1);
	}
}
