/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:01:35 by eboris            #+#    #+#             */
/*   Updated: 2019/11/10 16:35:58 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lists.h"

t_mainlist	*ft_printf_mainlist(t_mainlist *param)
{
	t_mainlist	*new;

	if (param == NULL)
	{
		new = (t_mainlist *)malloc(sizeof(t_mainlist));
		new->line_length = 0;
		new->line = NULL;
		new->fd = 0;
	}
	else
	{
		new = param;
	}
	new->offset = -1;
	new->flags = -1;
	new->fl_minus = -1;
	new->fl_plus = -1;
	new->fl_space = -1;
	new->fl_octothorpe = -1;
	new->fl_zero = -1;
	new->width = -1;
	new->precision = -1;
	new->length = -1;
	new->type = -1;
	return (new);
}

int			ft_remove_mainlist(t_mainlist *param)
{
	uint64_t	line_length;

	line_length = 0;
	if (param != NULL)
	{
		if (param->line != NULL)
		{
			ft_strdel(&param->line);
		}
		line_length = param->line_length;
		free(param);
		param = NULL;
	}
	return ((int)line_length);
}
