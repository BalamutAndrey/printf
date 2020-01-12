/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_arr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:08:30 by eboris            #+#    #+#             */
/*   Updated: 2020/01/09 14:08:25 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float_arr.h"

int8_t	ft_float_create_arr(char **floor)
{
	*floor = (char *)malloc(401 * sizeof(char));
	if (*floor == NULL)
		return (0);
	if (ft_float_reset_arr(*floor) == 0)
		return (0);
	return (1);
}

int8_t	ft_float_reset_arr(char *floor)
{
	int	i;

	i = 0;
	if (floor == NULL)
		return (0);
	while (i < 400)
	{
		floor[i] = 0;
		i++;
	}
	floor[i] = '\0';
	return (1);
}

int8_t	ft_float_create_arr_5(char **floor)
{
	*floor = (char *)malloc(1401 * sizeof(char));
	if (*floor == NULL)
		return (0);
	if (ft_float_reset_arr_5(*floor) == 0)
		return (0);
	return (1);
}

int8_t	ft_float_reset_arr_5(char *floor)
{
	int	i;

	i = 0;
	if (floor == NULL)
		return (0);
	while (i < 1400)
	{
		floor[i] = 0;
		i++;
	}
	floor[i] = '\0';
	return (1);
}
