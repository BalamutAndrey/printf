/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_ceiling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:16:29 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:16:44 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float_ceiling.h"

char	*ft_float_ceiling_calc(t_double *num)
{
	char	*ceiling1;
	char	*ceiling2;
	int		i;
	int		exp;

	if (num->exponent != -1023)
		exp = 53;
	else
		exp = 52;
	if ((ft_float_create_arr_5(&ceiling1) == 0) ||
		(ft_float_create_arr_5(&ceiling2) == 0))
		return (0);
	i = -1;
	ft_float_refix2_5(ceiling2);
	while (++i < exp)
		if (((num->mantissa[i] - '0') != 0) && (num->exponent - i < 0))
		{
			ft_float_reset_arr_5(ceiling1);
			ft_float_exponentiation_5((num->exponent - i) * -1, ceiling1);
			ft_float_plus_5(ceiling1, ceiling2);
		}
	ft_strdel(&ceiling1);
	return (ceiling2);
}

int8_t	ft_float_exponentiation_5(int64_t exp, char *floor1)
{
	int	i;
	int	z;

	floor1[1400 - exp] = 5;
	i = 1;
	while (i < exp)
	{
		z = 1399;
		while (z >= 0)
		{
			if (floor1[z] != 0)
			{
				floor1[z] = floor1[z] * 5;
				ft_float_refix_5(floor1);
			}
			z--;
		}
		i++;
	}
	ft_float_refix2_5(floor1);
	return (1);
}

int8_t	ft_float_plus_5(char *floor1, char *floor2)
{
	int	i;

	i = 1399;
	while (i >= 0)
	{
		floor2[i] = (floor2[i] - '0') + (floor1[i] - '0');
		i--;
	}
	ft_float_refix_5(floor2);
	ft_float_refix2_5(floor2);
	return (1);
}

char	*ft_float_reverce_5(char *floor)
{
	int		i;
	int		z;
	int		n;
	char	*fin;

	i = 0;
	z = 1;
	n = 0;
	if (ft_float_create_arr_5(&fin) == 0)
		return (0);
	while (i < 1400)
	{
		if ((floor[i] == '0') && (z == 1))
			i++;
		else
		{
			fin[n] = floor[i];
			n++;
			i++;
			z = 0;
		}
	}
	ft_strdel(&floor);
	return (ft_float_reverce_5_2(fin));
}

char	*ft_float_reverce_5_2(char *floor)
{
	int		i;
	int		n;
	char	*fin;

	i = ft_strlen(floor);
	n = 0;
	if ((fin = malloc((i + 1) * sizeof(char))) == NULL)
		return (NULL);
	fin[i] = '\0';
	i--;
	while (i >= 0)
	{
		fin[n] = floor[i];
		n++;
		i--;
	}
	ft_strdel(&floor);
	return (fin);
}
