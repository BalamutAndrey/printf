/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:21:31 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:37:48 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_H
# define FT_FLOAT_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_itoa.h"
# include "ft_putstr.h"
# include "ft_strdups.h"
# include "ft_num2char.h"
# include "ft_float_floor.h"
# include "ft_ldouble_floor.h"
# include "ft_float_naninf.h"

int8_t				ft_float(t_mainlist *param, va_list ap);
int8_t				ft_float_double(t_mainlist *param, va_list ap);
int8_t				ft_float_longdouble(t_mainlist *param, va_list ap);

#endif
