/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:34:37 by eboris            #+#    #+#             */
/*   Updated: 2019/12/02 16:34:52 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa.h"

char	*ft_itoa_base(unsigned long int nb, unsigned int base)
{
	char	*ret;
	char	*numbers;
	int		size;

	numbers = ft_strdup("0123456789abcdef");
	ret = NULL;
	size = ft_itoa_base_count(nb, base);
	if (!(ret = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ret[size--] = '\0';
	while (size >= 0)
	{
		ret[size--] = numbers[nb % base];
		nb /= base;
	}
	free(numbers);
	return (ret);
}

int		ft_itoa_base_count(unsigned long int nb, unsigned int base)
{
	int i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}
