/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typefun.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:44:43 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:52:48 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_typefun.h"

int8_t	ft_typefun1(t_mainlist *param, va_list ap)
{
	if (param->type == 0)
		return (ft_str2percent(param));
	if ((param->type == 1) || (param->type == 2))
		return (ft_integer(param, ap));
	if (param->type == 3)
		return (ft_octal(param, ap));
	if ((param->type == 5) || (param->type == 6) || (param->type == 18))
		return (ft_hexadec(param, ap));
	if (param->type == 4)
		return (ft_integeru(param, ap));
	if ((param->type == 7) || (param->type == 8))
		return (ft_float(param, ap));
	if (param->type == 15)
	{
		if ((param->length != 1) && (param->length != 4))
			return (ft_char(param, ap));
		else if ((param->length == 1) || (param->length == 4))
			return (ft_wchar(param, ap));
	}
	return (ft_typefun2(param, ap));
}

int8_t	ft_typefun2(t_mainlist *param, va_list ap)
{
	if (param->type == 16)
	{
		if ((param->length != 1) && (param->length != 4))
			return (ft_strings(param, ap));
		else if ((param->length == 1) || (param->length == 4))
			return (ft_wstrings(param, ap));
	}
	if (param->type == 17)
		return (ft_wstrings(param, ap));
	if (param->type == 19)
		return (ft_binary(param, ap));
	return (0);
}
