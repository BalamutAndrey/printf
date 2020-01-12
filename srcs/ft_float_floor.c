/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_floor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:58:24 by eboris            #+#    #+#             */
/*   Updated: 2020/01/09 14:08:33 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float_floor.h"

int8_t	ft_float_floor(t_mainlist *param, t_double *num)
{
	char	*floor;
	char	*ceiling;
	char	*point;

	if (num->exponent != -1023)
		num->mantissa = ft_fixmantissa(num->mantissa);
	else
		num->mantissa = ft_fixmantissa_denorm(num->mantissa);
	floor = ft_float_floor_calc(num);
	floor = ft_float_reverce(floor);
	ceiling = ft_float_ceiling_calc(num);
	ceiling = ft_float_reverce_5(ceiling);
	ceiling = ft_float_ceiling_rounding(param, &floor, ceiling);
	floor = ft_float_floor_ceiling_sing(param, num, floor);
	if ((ft_strlen(ceiling) > 0) || (param->fl_octothorpe > -1))
	{
		point = ft_strdup(".");
		floor = ft_strsdup(floor, point);
		if (ft_strlen(ceiling) > 0)
			floor = ft_strsdup(floor, ceiling);
	}
	floor = ft_integerwidth(param, floor);
	param->line_length = param->line_length + ft_putstr(floor, param->fd);
	ft_strdel(&floor);
	return (1);
}

char	*ft_float_floor_calc(t_double *num)
{
	char	*floor1;
	char	*floor2;
	int		i;

	if ((ft_float_create_arr(&floor1) == 0) ||
		(ft_float_create_arr(&floor2) == 0))
		return (NULL);
	i = 0;
	ft_float_refix2(floor2);
	while ((num->exponent - i >= 0) && (i < 53))
	{
		if ((num->mantissa[i] - '0') != 0)
		{
			ft_float_reset_arr(floor1);
			ft_float_exponentiation(num->exponent - i, floor1);
			ft_float_plus(floor1, floor2);
		}
		i++;
	}
	return (floor2);
}

int8_t	ft_float_exponentiation(int64_t exp, char *floor1)
{
	int	i;
	int	z;

	if (exp == 0)
	{
		floor1[0] = 1;
		ft_float_refix2(floor1);
		return (1);
	}
	floor1[0] = 2;
	i = 1;
	while (i < exp)
	{
		z = 0;
		while (z < 400)
		{
			if (floor1[z] != 0)
				floor1[z] = floor1[z] * 2;
			z++;
		}
		ft_float_refix(floor1);
		i++;
	}
	ft_float_refix2(floor1);
	return (1);
}

int8_t	ft_float_plus(char *floor1, char *floor2)
{
	int	i;

	i = 0;
	while (i < 400)
	{
		floor2[i] = (floor2[i] - '0') + (floor1[i] - '0');
		i++;
	}
	ft_float_refix(floor2);
	ft_float_refix2(floor2);
	return (1);
}

char	*ft_float_reverce(char *floor)
{
	int		i;
	int		z;
	int		n;
	char	*fin;

	i = 399;
	z = 1;
	n = 0;
	if (ft_float_create_arr(&fin) == 0)
		return (0);
	while (i >= 0)
	{
		if ((floor[i] == '0') && (z == 1) && (i != 0))
			i--;
		else
		{
			fin[n++] = floor[i--];
			z = 0;
		}
	}
	if (z == 1)
		fin[0] = '0';
	fin[n] = '\0';
	ft_strdel(&floor);
	return (fin);
}
