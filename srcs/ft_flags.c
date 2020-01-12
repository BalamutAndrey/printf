/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:37:31 by eboris            #+#    #+#             */
/*   Updated: 2019/11/11 15:43:13 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_flags.h"

int8_t	ft_flags(t_mainlist *param, va_list ap)
{
	int8_t	i;
	char	*str;

	i = 1;
	str = param->line;
	while ((str[i] != '\0') && ((str[i] == '-') || (str[i] == '+') ||
				(str[i] == ' ') || (str[i] == '#') || (str[i] == '0')))
	{
		param->flags = 1;
		if (str[i] == '-')
			param->fl_minus = 1;
		else if (str[i] == '+')
			param->fl_plus = 1;
		else if (str[i] == ' ')
			param->fl_space = 1;
		else if (str[i] == '#')
			param->fl_octothorpe = 1;
		else if (str[i] == '0')
			param->fl_zero = 1;
		i++;
	}
	param->offset = i;
	return (ft_width(param, ap));
}
