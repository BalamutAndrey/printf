/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:34:18 by eboris            #+#    #+#             */
/*   Updated: 2019/12/02 16:39:57 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITOA_H
# define FT_ITOA_H

# include <string.h>
# include <stdlib.h>
# include "ft_strdups.h"

char	*ft_itoa_base(unsigned long int nb, unsigned int base);
int		ft_itoa_base_count(unsigned long int nb, unsigned int base);

#endif
