/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remparam.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:29:46 by eboris            #+#    #+#             */
/*   Updated: 2019/11/15 15:08:59 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_remparam.h"

int8_t	ft_remove_params(t_mainlist *param)
{
	int8_t	i;

	i = param->offset + 1;
	if ((param->line = ft_strmancpy(param->line, i)) == NULL)
		return (0);
	return (1);
}
