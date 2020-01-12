/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_refix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 18:54:51 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:00:03 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float_refix.h"

int8_t	ft_float_refix(char *floor)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (z < 400)
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

int8_t	ft_float_refix2(char *floor)
{
	int	z;

	z = 0;
	while (z < 400)
	{
		floor[z] = floor[z] + '0';
		z++;
	}
	return (1);
}

int8_t	ft_float_refix_5(char *floor)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (z < 1400)
	{
		floor[z] = floor[z] + i;
		i = 0;
		if (floor[z] > 9)
		{
			while (floor[z] > 9)
			{
				floor[z] = floor[z] - 10;
				i = i + 1;
			}
		}
		else
			i = 0;
		z++;
	}
	return (1);
}

int8_t	ft_float_refix2_5(char *floor)
{
	int	z;

	z = 1399;
	while (z >= 0)
	{
		floor[z] = floor[z] + '0';
		z--;
	}
	return (1);
}
