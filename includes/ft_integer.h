/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 18:38:52 by eboris            #+#    #+#             */
/*   Updated: 2019/11/23 18:24:43 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INTEGER_H
# define FT_INTEGER_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_putstr.h"
# include "ft_num2char.h"
# include "ft_intwidth.h"
# include "ft_integeru.h"

int8_t	ft_integer(t_mainlist *param, va_list ap);
int8_t	ft_int(t_mainlist *param, va_list ap);
int8_t	ft_int_l(t_mainlist *param, va_list ap);
int8_t	ft_int_ll(t_mainlist *param, va_list ap);

#endif
