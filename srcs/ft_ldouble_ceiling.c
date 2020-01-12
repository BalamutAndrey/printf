/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldouble_ceiling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:17:26 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 17:24:23 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ldouble_ceiling.h"

char	*ft_ldouble_ceiling_calc(t_lngdouble *num)
{
	char	*ceiling1;
	char	*ceiling2;
	int		i;
	int		exp;

	exp = 65;
	if ((ft_ldouble_create_arr_5(&ceiling1) == 0) ||
		(ft_ldouble_create_arr_5(&ceiling2) == 0))
		return (0);
	i = -1;
	ft_ldouble_refix2_5(ceiling2);
	while (++i < exp)
		if (((num->mantissa[i] - '0') != 0) && (num->exponent - i < 0))
		{
			ft_ldouble_reset_arr_5(ceiling1);
			ft_ldouble_exponentiation_5((num->exponent - i) * -1, ceiling1);
			ft_ldouble_plus_5(ceiling1, ceiling2);
		}
	ft_strdel(&ceiling1);
	return (ceiling2);
}

int8_t	ft_ldouble_exponentiation_5(int64_t exp, char *ceiling)
{
	int	i;
	int	z;

	ceiling[16400 - exp] = 5;
	i = 1;
	while (i < exp)
	{
		z = 16399;
		while (z >= 0)
		{
			if (ceiling[z] > 0)
			{
				ceiling[z] = ceiling[z] * 5;
				ft_ldouble_refix_5(ceiling);
			}
			z--;
		}
		i++;
	}
	ft_ldouble_refix2_5(ceiling);
	return (1);
}

int8_t	ft_ldouble_plus_5(char *ceiling1, char *ceiling2)
{
	int	i;

	i = 16399;
	while (i >= 0)
	{
		ceiling2[i] = (ceiling2[i] - '0') + (ceiling1[i] - '0');
		i--;
	}
	ft_ldouble_refix_5(ceiling2);
	ft_ldouble_refix2_5(ceiling2);
	return (1);
}

char	*ft_ldouble_reverce_5(char *ceiling)
{
	int		i;
	int		z;
	int		n;
	char	*fin;

	i = 0;
	z = 1;
	n = 0;
	if (ft_ldouble_create_arr_5(&fin) == 0)
		return (0);
	while (i < 16400)
	{
		if ((ceiling[i] == '0') && (z == 1))
			i++;
		else
		{
			fin[n] = ceiling[i];
			n++;
			i++;
			z = 0;
		}
	}
	ft_strdel(&ceiling);
	return (ft_ldouble_reverce_5_2(fin));
}

char	*ft_ldouble_reverce_5_2(char *ceiling)
{
	int		i;
	int		n;
	char	*fin;

	i = ft_strlen(ceiling);
	n = 0;
	if ((fin = malloc((i + 1) * sizeof(char))) == NULL)
		return (NULL);
	fin[i] = '\0';
	i--;
	while (i >= 0)
	{
		fin[n] = ceiling[i];
		n++;
		i--;
	}
	ft_strdel(&ceiling);
	return (fin);
}
