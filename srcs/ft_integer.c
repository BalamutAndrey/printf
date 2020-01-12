/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:56:59 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:19:14 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_integer.h"

int8_t	ft_integer(t_mainlist *param, va_list ap)
{
	if (param->type == 4)
		return (ft_integeru(param, ap));
	if ((param->length < 0) || (param->length == 2) || (param->length == 3))
		return (ft_int(param, ap));
	else if (param->length == 1)
		return (ft_int_l(param, ap));
	else if (param->length == 4)
		return (ft_int_ll(param, ap));
	else if ((param->length == 5) || (param->length == 6) ||
				(param->length == 7) || (param->length == 8))
		return (ft_int_ll(param, ap));
	return (1);
}

int8_t	ft_int(t_mainlist *param, va_list ap)
{
	int64_t	i;
	char	*temp;

	i = va_arg(ap, int);
	if ((temp = ft_num2char(param, i)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_int_l(t_mainlist *param, va_list ap)
{
	int64_t	i;
	char	*temp;

	i = va_arg(ap, long int);
	if ((temp = ft_num2char(param, i)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_int_ll(t_mainlist *param, va_list ap)
{
	int64_t	i;
	char	*temp;

	i = va_arg(ap, long long int);
	if ((temp = ft_num2char(param, i)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}
