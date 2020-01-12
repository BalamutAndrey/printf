/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_rounding.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:21:27 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:44:02 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float_rounding.h"

char	*ft_float_ceiling_rounding(t_mainlist *param,
									char **floor, char *ceiling)
{
	int		i;
	int		z;
	int		n;
	char	*fin;

	i = param->precision;
	z = ft_strlen(ceiling);
	n = 0;
	if ((fin = malloc((i + 1) * sizeof(char))) == NULL)
		return (0);
	fin[i] = '\0';
	if (((i + 1) < z) && (ceiling[i] >= '5'))
		n = 1;
	while (--i >= 0)
		ft_float_ceiling_round(i, ceiling, &n, fin);
	if (n == 1)
		*floor = ft_float_floor_ceiling(*floor);
	ft_strdel(&ceiling);
	param->precision = -1;
	return (fin);
}

int8_t	ft_float_ceiling_round(int i, char *ceiling, int *n, char *fin)
{
	int	z;

	z = ft_strlen(ceiling);
	if ((*n == 1) && (ceiling[i] < '9'))
	{
		fin[i] = ceiling[i] + 1;
		*n = 0;
	}
	else if ((*n == 1) && (ceiling[i] == '9'))
	{
		fin[i] = '0';
		*n = 1;
	}
	else if ((*n == 0) && (i < z))
		fin[i] = ceiling[i];
	else
		fin[i] = '0';
	return (1);
}

char	*ft_float_floor_ceiling(char *floor)
{
	int		i;
	int		z;
	char	*fin;

	i = 1;
	z = ft_strlen(floor);
	if ((fin = malloc((z + 2) * sizeof(char))) == NULL)
		return (0);
	fin[0] = '0';
	fin[z + 1] = '\0';
	while (--z >= 0)
	{
		fin[z + 1] = floor[z] + i;
		if (fin[z + 1] > '9')
		{
			fin[z + 1] = fin[z + 1] - 10;
			i = 1;
		}
		else
			i = 0;
	}
	if (i == 1)
		fin[0] = '1';
	ft_strdel(&floor);
	return (fin);
}

char	*ft_float_floor_ceiling_sing(t_mainlist *param, t_double *num,
										char *floor)
{
	int		i;
	int		n;
	int		z;
	char	*fin;

	i = 0;
	n = 1;
	z = ft_strlen(floor);
	if ((num->sing != 1) && (param->fl_plus == -1) && (param->fl_space == -1))
		n--;
	if ((floor[0] == '0') && (z > 1))
		i++;
	if ((fin = malloc((z + 2) * sizeof(char))) == NULL)
		return (0);
	if (num->sing == 1)
		fin[0] = '-';
	else if (param->fl_space == 1)
		fin[0] = ' ';
	else if (param->fl_plus == 1)
		fin[0] = '+';
	while (i < z)
		fin[n++] = floor[i++];
	fin[n] = '\0';
	ft_strdel(&floor);
	return (fin);
}
