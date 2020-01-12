/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:46:35 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 12:44:28 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs.h"

void	ft_strdel(char **s)
{
	if (s && *s)
	{
		free(*s);
		*s = NULL;
	}
}

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_wstrlen(wchar_t *s)
{
	int	i;
	int n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= 0x7F)
			n = n + 1;
		else if (s[i] <= 0x7FF)
			n = n + 2;
		else if (s[i] <= 0xFFFF)
			n = n + 3;
		else if (s[i] <= 0x10FFFF)
			n = n + 4;
		i++;
	}
	return (n);
}

int8_t	ft_charlen(wchar_t c)
{
	if (c <= 0x7F)
		return (1);
	else if (c <= 0x7FF)
		return (2);
	else if (c <= 0xFFFF)
		return (3);
	else if (c <= 0x10FFFF)
		return (4);
	return (0);
}

void	ft_wstrdel(wchar_t **s)
{
	if (s && *s)
	{
		free(*s);
		*s = NULL;
	}
}
