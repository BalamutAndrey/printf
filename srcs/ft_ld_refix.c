/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ld_refix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:35:59 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 18:51:35 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ld_refix.h"

int8_t	ft_ldouble_refix(char *floor)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (z < 5400)
	{
		floor[z] = floor[z] + i;
		if (floor[z] > 9)
		{
			floor[z] = floor[z] - 10;
			i = 1;
		}
		else
			i = 0;
		z++;
	}
	return (1);
}

int8_t	ft_ldouble_refix2(char *floor)
{
	int	z;

	z = 0;
	while (z < 5400)
	{
		floor[z] = floor[z] + '0';
		z++;
	}
	return (1);
}

int8_t	ft_ldouble_refix_5(char *ceiling)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (z < 16400)
	{
		ceiling[z] = ceiling[z] + i;
		i = 0;
		if (ceiling[z] > 9)
		{
			while (ceiling[z] > 9)
			{
				ceiling[z] = ceiling[z] - 10;
				i = i + 1;
			}
		}
		else
			i = 0;
		z++;
	}
	return (1);
}

int8_t	ft_ldouble_refix2_5(char *ceiling)
{
	int	z;

	z = 16399;
	while (z >= 0)
	{
		ceiling[z] = ceiling[z] + '0';
		z--;
	}
	return (1);
}
