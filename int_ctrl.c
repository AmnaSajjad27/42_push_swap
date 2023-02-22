/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_ctrl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:10:34 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:10:38 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	because_of_norm(t_data *p_s, char **argv)
{
	if (argv[p_s->d][p_s->i] == ' ')
		p_s->i++;
	else if (ft_isdigit(argv[p_s->d][p_s->i]) == 1)
	{
		p_s->i++;
		type_three(argv, p_s);
	}
	else if (argv[p_s->d][p_s->i] == '+' || argv[p_s->d][p_s->i] == '-')
	{
		p_s->i++;
		type_four_five(argv, p_s);
	}
	else
		type_six(p_s);
}

int	int_ctrl(int argc, char **argv, t_data *p_s)
{
	p_s->d = 1;
	argc = 1;
	p_s->f_argc = argc;
	while (argv[p_s->d])
	{
		p_s->i = 0;
		if (!argv[p_s->d][p_s->i])
			type_one(p_s);
		while (argv[p_s->d][p_s->i] == ' ')
		{
			p_s->i++;
			if (!argv[p_s->d][p_s->i])
				type_two(p_s);
		}
		while (argv[p_s->d][p_s->i])
			because_of_norm(p_s, argv);
		p_s->d++;
	}
	return (p_s->f_argc);
}
