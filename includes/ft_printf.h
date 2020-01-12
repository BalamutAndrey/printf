/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:17:54 by eboris            #+#    #+#             */
/*   Updated: 2020/01/12 17:26:12 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include "ft_mainlist.h"
# include "ft_lists.h"
# include "ft_strdups.h"
# include "ft_strs.h"
# include "ft_parsing.h"

int			ft_printf(const char *format, ...);
int			ft_dprintf(int fd, const char *format, ...);

#endif
