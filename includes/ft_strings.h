/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:25:41 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 12:52:47 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H

# include <stdarg.h>
# include <stdint.h>
# include <string.h>
# include <wchar.h>
# include "ft_mainlist.h"
# include "ft_strdups.h"
# include "ft_null.h"
# include "ft_strs.h"
# include "ft_stringwidth.h"
# include "ft_putstr.h"

int8_t	ft_strings(t_mainlist *param, va_list ap);
int8_t	ft_wstrings(t_mainlist *param, va_list ap);
wchar_t	*ft_wstring_precision(t_mainlist *param, wchar_t *src);

#endif
