/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_mix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:29:06 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:29:08 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_data *p_s)
{
	p_s->rr_count = 1;
	ra(p_s);
	rb(p_s);
	ft_printf("rr\n");
	p_s->rr_count = 0;
}

void	ss(t_data *p_s)
{
	p_s->ss_count = 1;
	sa(p_s);
	sb(p_s);
	ft_printf("ss\n");
	p_s->ss_count = 0;
}

void	rrr(t_data *p_s)
{
	p_s->rrr_count = 1;
	rra(p_s);
	rrb(p_s);
	ft_printf("rrr\n");
	p_s->rrr_count = 0;
}
