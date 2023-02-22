/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:26:42 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:26:44 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_biggestbit(t_data *p_s)
{
	int	count;
	int	biggest;

	count = 0;
	biggest = p_s->biggestnum_a;
	while (biggest)
	{
		count++;
		biggest >>= 1;
	}
	return (count);
}

void	binary_sorting(t_data *p_s)
{
	while (p_s->set != p_s->setcount + 1)
	{
		if ((p_s->seta[p_s->last_a] >> p_s->bit) & 1)
		{
			ra(p_s);
			p_s->ps_count++;
		}
		else
		{
			pb(p_s);
			p_s->ps_count++;
		}
		p_s->set++;
	}	
}

void	radix(t_data *p_s)
{
	int	bitcount;

	p_s->bit = 0;
	bitcount = find_biggestbit(p_s);
	p_s->setcount = p_s->last_a;
	while (p_s->bit != bitcount)
	{
		p_s->set = 0;
		binary_sorting(p_s);
		while (p_s->last_a != p_s->setcount)
		{
			pa(p_s);
			p_s->ps_count++;
		}
		p_s->bit++;
	}
}
