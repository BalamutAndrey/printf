/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_ceiling.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:14:23 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:33:23 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_CEILING_H
# define FT_FLOAT_CEILING_H

# include <stdint.h>
# include "ft_float_stuct.h"
# include "ft_float_floor.h"
# include "ft_float_arr.h"
# include "ft_float_refix.h"
# include "ft_strs.h"
# include "ft_float_stuct.h"

char	*ft_float_ceiling_calc(t_double *num);
int8_t	ft_float_exponentiation_5(int64_t exp, char *floor1);
int8_t	ft_float_plus_5(char *floor1, char *floor2);
char	*ft_float_reverce_5(char *floor);
char	*ft_float_reverce_5_2(char *floor);

#endif
