/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fixmanissa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:09:54 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 18:57:11 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fixmantissa.h"

char	*ft_fixmantissa(char *src)
{
	char	*fin;
	int		len;
	int		i;
	int		z;

	if ((fin = malloc(54 * sizeof(char))) == NULL)
		return (NULL);
	len = 52 - (ft_strlen(src));
	i = 1;
	z = 0;
	fin[0] = '1';
	while (i <= len)
	{
		fin[i] = '0';
		i++;
	}
	while ((i + z) < 53)
	{
		fin[i + z] = src[z];
		z++;
	}
	fin[i + z] = '\0';
	ft_strdel(&src);
	return (fin);
}

char	*ft_fixmantissa_denorm(char *src)
{
	char	*fin;
	int		len;
	int		i;
	int		z;

	if ((fin = malloc(53 * sizeof(char))) == NULL)
		return (NULL);
	len = 51 - (ft_strlen(src));
	i = 0;
	z = 0;
	while (i <= len)
	{
		fin[i] = '0';
		i++;
	}
	while ((i + z) < 52)
	{
		fin[i + z] = src[z];
		z++;
	}
	fin[i + z] = '\0';
	ft_strdel(&src);
	return (fin);
}

char	*ft_ld_fixmantissa(char *src)
{
	char	*fin;
	int		len;
	int		i;
	int		z;

	if ((fin = malloc(65 * sizeof(char))) == NULL)
		return (NULL);
	len = 64 - (ft_strlen(src));
	i = 0;
	z = 0;
	while (i <= len)
	{
		fin[i] = '0';
		i++;
	}
	while ((i + z) < 65)
	{
		fin[i + z] = src[z];
		z++;
	}
	fin[i + z] = '\0';
	ft_strdel(&src);
	return (fin);
}
