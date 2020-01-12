/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typefun.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:42:07 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:53:04 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPEFUN_H
# define FT_TYPEFUN_H

# include <stdint.h>
# include <stdarg.h>
# include "ft_mainlist.h"
# include "ft_strpercent.h"
# include "ft_integer.h"
# include "ft_integeru.h"
# include "ft_octal.h"
# include "ft_hexadec.h"
# include "ft_float.h"
# include "ft_char.h"
# include "ft_strings.h"
# include "ft_binary.h"

int8_t	ft_typefun1(t_mainlist *param, va_list ap);
int8_t	ft_typefun2(t_mainlist *param, va_list ap);

#endif
