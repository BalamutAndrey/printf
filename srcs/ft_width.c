/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:26:58 by eboris            #+#    #+#             */
/*   Updated: 2019/11/11 15:41:19 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_width.h"

int8_t	ft_width(t_mainlist *param, va_list ap)
{
	char	s[12];
	char	*str;
	int8_t	n;
	int8_t	i;

	n = 0;
	i = param->offset;
	str = param->line;
	if (str[i] == '*')
	{
		param->width = va_arg(ap, int);
		param->offset = param->offset + 1;
		return (ft_precision(param, ap));
	}
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9') && (n < 11))
	{
		s[n] = str[i];
		n++;
		i++;
	}
	s[n] = '\0';
	param->offset = param->offset + n;
	if (ft_strlen(s) > 0)
		param->width = ft_atoi(s);
	return (ft_precision(param, ap));
}
