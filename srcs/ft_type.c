/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:11:29 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:48:54 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_type.h"

int8_t	ft_type(t_mainlist *param, va_list ap)
{
	int8_t	i;
	char	*str;

	i = param->offset;
	str = param->line;
	if ((str[i] != '\0') && (str[i] == '%'))
		param->type = 0;
	if ((str[i] != '\0') && ((str[i] == 'd') || (str[i] == 'D')))
	{
		param->type = 1;
		if (str[i] == 'D')
			param->length = 4;
	}
	if ((str[i] != '\0') && (str[i] == 'i'))
		param->type = 2;
	if ((str[i] != '\0') && ((str[i] == 'o') || (str[i] == 'O')))
	{
		param->type = 3;
		if (str[i] == 'O')
			param->length = 4;
	}
	return (ft_type2(param, ap, i, str));
}

int8_t	ft_type2(t_mainlist *param, va_list ap, int8_t i, char *str)
{
	if ((str[i] != '\0') && ((str[i] == 'u') || (str[i] == 'U')))
	{
		param->type = 4;
		if (str[i] == 'U')
			param->length = 4;
	}
	if ((str[i] != '\0') && (str[i] == 'x'))
		param->type = 5;
	if ((str[i] != '\0') && (str[i] == 'X'))
		param->type = 6;
	if ((str[i] != '\0') && ((str[i] == 'f') || (str[i] == 'F')))
	{
		param->type = 7;
		if (str[i] == 'F')
			param->type = 8;
	}
	if ((str[i] != '\0') && ((str[i] == 'c') || (str[i] == 'C')))
	{
		param->type = 15;
		if (str[i] == 'C')
			param->length = 4;
	}
	return (ft_type3(param, ap, i, str));
}

int8_t	ft_type3(t_mainlist *param, va_list ap, int8_t i, char *str)
{
	if ((str[i] != '\0') && (str[i] == 's'))
		param->type = 16;
	if ((str[i] != '\0') && (str[i] == 'S'))
		param->type = 17;
	if ((str[i] != '\0') && (str[i] == 'p'))
	{
		param->type = 18;
		param->length = 4;
		param->fl_octothorpe = 1;
	}
	if ((str[i] != '\0') && (str[i] == 'b'))
		param->type = 19;
	i = ft_typefun1(param, ap);
	if ((ft_remove_params(param)) == 0)
		return (0);
	return (i);
}
