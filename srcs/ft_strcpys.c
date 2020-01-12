/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpys.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:36:06 by eboris            #+#    #+#             */
/*   Updated: 2019/11/10 16:26:15 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpys.h"

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strmbncpy(char *src, int i)
{
	int		n;
	char	*s;

	n = 0;
	s = (char *)malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (n < i)
	{
		s[n] = src[n];
		n++;
	}
	s[n] = '\0';
	return (s);
}

char	*ft_strmancpy(char *src, int i)
{
	int		n;
	char	*s;

	n = 0;
	s = (char *)malloc((ft_strlen(src) - i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (src[i] != '\0')
	{
		s[n] = src[i];
		n++;
		i++;
	}
	s[n] = '\0';
	ft_strdel(&src);
	return (s);
}

wchar_t	*ft_wstrcpy(wchar_t *dst, wchar_t *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
