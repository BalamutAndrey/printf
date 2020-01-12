/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:31:21 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 15:53:34 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHAR_H
# define FT_CHAR_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_charwidth.h"
# include "ft_putstr.h"
# include "ft_strs.h"

int8_t	ft_char(t_mainlist *param, va_list ap);
int8_t	ft_wchar(t_mainlist *param, va_list ap);
int32_t	ft_putcharstr(char *str, t_mainlist *param);
int32_t	ft_putwcharstr(wchar_t *str, t_mainlist *param);

#endif
