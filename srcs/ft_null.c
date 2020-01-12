/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_null.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 14:50:43 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:27:56 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_null.h"

char	*ft_null(void)
{
	char	*fin;

	fin = (char *)malloc(7 * sizeof(char));
	fin[0] = '(';
	fin[1] = 'n';
	fin[2] = 'u';
	fin[3] = 'l';
	fin[4] = 'l';
	fin[5] = ')';
	fin[6] = '\0';
	return (fin);
}

char	*ft_eos(void)
{
	char	*fin;

	fin = (char *)malloc(sizeof(char));
	fin[0] = '\0';
	return (fin);
}

wint_t	*ft_wnull(void)
{
	wint_t	*fin;

	fin = (wint_t *)malloc(7 * sizeof(wint_t));
	fin[0] = '(';
	fin[1] = 'n';
	fin[2] = 'u';
	fin[3] = 'l';
	fin[4] = 'l';
	fin[5] = ')';
	fin[6] = '\0';
	return (fin);
}

char	*ft_minus(void)
{
	char	*fin;

	fin = (char *)malloc(2 * sizeof(char));
	fin[0] = '-';
	fin[1] = '\0';
	return (fin);
}

char	*ft_point(void)
{
	char	*fin;

	fin = (char *)malloc(2 * sizeof(char));
	fin[0] = '.';
	fin[1] = '\0';
	return (fin);
}
