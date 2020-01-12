/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integeru.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:20:09 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:18:08 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_integeru.h"

int8_t	ft_integeru(t_mainlist *param, va_list ap)
{
	if ((param->length < 0) || (param->length == 2) || (param->length == 3))
		return (ft_intu(param, ap));
	else if (param->length == 1)
		return (ft_intu_l(param, ap));
	else if (param->length == 4)
		return (ft_intu_ll(param, ap));
	else if ((param->length == 5) || (param->length == 6) ||
				(param->length == 7) || (param->length == 8))
		return (ft_intu_ll(param, ap));
	return (1);
}

int8_t	ft_intu(t_mainlist *param, va_list ap)
{
	uint64_t	i;
	char		*temp;

	i = va_arg(ap, unsigned int);
	if ((temp = ft_numu2char(param, i)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_intu_l(t_mainlist *param, va_list ap)
{
	uint64_t	i;
	char		*temp;

	i = va_arg(ap, unsigned long int);
	if ((temp = ft_numu2char(param, i)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_intu_ll(t_mainlist *param, va_list ap)
{
	uint64_t	i;
	char		*temp;

	i = va_arg(ap, unsigned long long int);
	if ((temp = ft_numu2char(param, i)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}
