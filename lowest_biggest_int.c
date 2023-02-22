/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_biggest_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:09:01 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:30:43 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../push_swap.h"

int	biggestindex_a(t_data *p_s)
{
	int	i;
	int	x;
	int	count;

	count = 1;
	i = 1;
	x = p_s->last_a;
	while (i <= p_s->last_a)
	{
		if (p_s->seta[x] < p_s->seta[p_s->last_a - i])
		{
			x = x - count;
			count = 0;
		}
		count++;
		i++;
	}
	p_s->biggestindex_a = x;
	p_s->biggestnum_a = p_s->seta[x];
	return (p_s->biggestindex_a);
}

int	lowestindex(t_data *p_s)
{
	int	i;
	int	x;
	int	count;

	count = 1;
	i = 1;
	x = p_s->last_a;
	while (i <= p_s->last_a)
	{
		if (p_s->seta[x] > p_s->seta[p_s->last_a - i])
		{
			x = x - count;
			count = 0;
		}
		count++;
		i++;
	}
	p_s->lowestindex = x;
	p_s->lowestnum = p_s->seta[x];
	return (p_s->lowestindex);
}

int	biggestindex_b(t_data *p_s)
{
	int	i;
	int	x;
	int	count;

	count = 1;
	i = 1;
	x = p_s->last_b - 1;
	while (i <= p_s->last_b - 1)
	{
		if (p_s->setb[x] < p_s->setb[p_s->last_b - 1 - i])
		{
			x = x - count;
			count = 0;
		}
		count++;
		i++;
	}
	p_s->biggestindex_b = x;
	p_s->biggestnum_b = p_s->setb[x];
	return (p_s->biggestindex_b);
}
