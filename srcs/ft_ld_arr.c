/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ld_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:27:46 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 18:50:23 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ld_arr.h"

int8_t	ft_ldouble_create_arr(char **floor)
{
	*floor = (char *)malloc(5401 * sizeof(char));
	if (*floor == NULL)
		return (0);
	if (ft_ldouble_reset_arr(*floor) == 0)
		return (0);
	return (1);
}

int8_t	ft_ldouble_reset_arr(char *floor)
{
	int	i;

	i = 0;
	if (floor == NULL)
		return (0);
	while (i < 5400)
	{
		floor[i] = 0;
		i++;
	}
	floor[i] = '\0';
	return (1);
}

int8_t	ft_ldouble_create_arr_5(char **ceiling)
{
	*ceiling = (char *)malloc(16401 * sizeof(char));
	if (*ceiling == NULL)
		return (0);
	if (ft_ldouble_reset_arr_5(*ceiling) == 0)
		return (0);
	return (1);
}

int8_t	ft_ldouble_reset_arr_5(char *ceiling)
{
	int	i;

	i = 0;
	if (ceiling == NULL)
		return (0);
	while (i < 16400)
	{
		ceiling[i] = 0;
		i++;
	}
	ceiling[i] = '\0';
	return (1);
}
