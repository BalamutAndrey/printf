/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdups.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:17:40 by eboris            #+#    #+#             */
/*   Updated: 2019/11/16 16:38:13 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strdups.h"

char	*ft_strdup(char *s)
{
	char	*fin;

	if (!s)
		return (0);
	fin = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (fin)
	{
		ft_strcpy(fin, s);
		return (fin);
	}
	else
		return (NULL);
	return (s);
}

char	*ft_strsdup(char *b, char *a)
{
	char	*fin;
	int		x;
	int		y;

	x = 0;
	y = 0;
	fin = (char *)malloc((ft_strlen(b) + ft_strlen(a) + 1) * sizeof(char));
	if (!fin)
		return (NULL);
	while (b[x] != '\0')
	{
		fin[x] = b[x];
		x++;
	}
	while (a[y] != '\0')
	{
		fin[x + y] = a[y];
		y++;
	}
	fin[x + y] = '\0';
	ft_strdel(&b);
	ft_strdel(&a);
	return (fin);
}

wchar_t	*ft_wstrdup(wchar_t *s)
{
	wchar_t	*fin;

	if (!s)
		return (0);
	fin = (wchar_t *)malloc((ft_wstrlen(s) + 1) * sizeof(wchar_t));
	if (fin)
	{
		ft_wstrcpy(fin, s);
		return (fin);
	}
	else
		return (NULL);
	return (s);
}
