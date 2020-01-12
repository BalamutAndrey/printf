/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldouble_ceiling.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:16:24 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 17:33:01 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LDOUBLE_CEILING_H
# define FT_LDOUBLE_CEILING_H

# include <stdint.h>
# include "ft_ldouble_floor.h"
# include "ft_ld_arr.h"
# include "ft_ld_refix.h"
# include "ft_strs.h"
# include "ft_float_stuct.h"

char	*ft_ldouble_ceiling_calc(t_lngdouble *num);
int8_t	ft_ldouble_exponentiation_5(int64_t exp, char *ceiling);
int8_t	ft_ldouble_plus_5(char *ceiling1, char *ceiling2);
char	*ft_ldouble_reverce_5(char *ceiling);
char	*ft_ldouble_reverce_5_2(char *ceiling);

#endif
