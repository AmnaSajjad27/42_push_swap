/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:12:47 by asajjad           #+#    #+#             */
/*   Updated: 2023/02/22 17:31:37 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_put_base(unsigned int nbr, const char *base, int *count);
void	ft_put_pointer(unsigned long long c, int *count);
int		ft_putcharp(char c, int fd);
void	ft_putnbrp(int c, int *count);
int		ft_putstrp(const char *str, int fd);

#endif
