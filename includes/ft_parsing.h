/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:57:27 by eboris            #+#    #+#             */
/*   Updated: 2019/12/07 21:16:27 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_lists.h"
# include "ft_strs.h"
# include "ft_strcpys.h"
# include "ft_putstr.h"
# include "ft_strpercent.h"
# include "ft_flags.h"

int8_t	ft_parsing(t_mainlist *param, va_list ap);

#endif
