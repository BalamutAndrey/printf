/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intwidth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:23:16 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 15:37:09 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_intwidth.h"

char	*ft_integerwidth(t_mainlist *param, char *str)
{
	int		len;
	int		width;
	char	*fin;
	char	znak;

	len = ft_strlen(str);
	width = param->width;
	znak = 'z';
	if ((str[0] == '+') || (str[0] == '-'))
		znak = str[0];
	if ((param->fl_space == 1) && (znak == 'z'))
		znak = ' ';
	if (len < width)
	{
		if ((param->fl_zero == 1) && (param->precision < 0))
			fin = ft_integerwidthzero(str, width, len, znak);
		else
			fin = ft_integerwidthspace(param, str, width, len);
		ft_strdel(&str);
	}
	else
		fin = str;
	return (fin);
}

char	*ft_integerwidthzero(char *str, int width, int len, char znak)
{
	int		s;
	int		n;
	char	*fin;

	s = 0;
	n = width;
	if ((fin = (char *)malloc((width + 1) * sizeof(char))) == NULL)
		return (NULL);
	if (znak != 'z')
	{
		fin[0] = znak;
		s++;
	}
	while (n >= s)
	{
		if (len >= s)
			fin[n] = str[len];
		else
			fin[n] = '0';
		n--;
		len--;
	}
	fin[width] = '\0';
	return (fin);
}

char	*ft_integerwidthspace(t_mainlist *param, char *str, int width, int len)
{
	int		i;
	int		n;
	char	*fin;

	i = 0;
	n = 0;
	if ((fin = (char *)malloc((width + 1) * sizeof(char))) == NULL)
		return (NULL);
	if ((param->flags == -1) || ((param->flags == 1) && (param->fl_minus < 1)))
		while (i < (width - len))
			fin[i++] = ' ';
	while (n < len)
	{
		fin[i + n] = str[n];
		n++;
	}
	if ((param->flags == 1) && (param->fl_minus == 1))
		while ((n + i) < width)
			fin[n++ + i] = ' ';
	fin[n + i] = '\0';
	return (fin);
}
