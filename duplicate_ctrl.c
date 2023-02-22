/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_ctrl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:10:09 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:27:19 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	duplicate(t_data *p_s)
{
	int	i;

	i = 1;
	while (p_s->last_ax < p_s->last_a && \
	(p_s->last_ax + i <= p_s->last_a) && \
	p_s->seta[p_s->last_ax] != p_s->seta[p_s->last_ax + i])
		i++;
	if (p_s->last_ax < p_s->last_a && (p_s->last_ax + i <= p_s->last_a) \
	&& p_s->seta[p_s->last_ax] == p_s->seta[p_s->last_ax + i++])
	{
		free(p_s->seta);
		free(p_s->setb);
		free(p_s);
		ft_printf("Error\nDuplicate int!");
		exit(1);
	}
}
