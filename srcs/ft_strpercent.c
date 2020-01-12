/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpercent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:10:11 by eboris            #+#    #+#             */
/*   Updated: 2019/11/15 16:41:39 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strpercent.h"

int64_t	ft_strpercent(char *s)
{
	int64_t		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
			return (i);
		i++;
	}
	return (-1);
}

int8_t	ft_str2percent(t_mainlist *param)
{
	char	*temp;

	if ((temp = (char *)malloc(2 * sizeof(char))) == NULL)
		return (0);
	temp[0] = '%';
	temp[1] = '\0';
	if ((param->precision != -1) && (param->precision < 1))
		temp[0] = '\0';
	if ((temp = ft_stringwidth(temp, param)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}
