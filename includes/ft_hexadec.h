/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:36:00 by eboris            #+#    #+#             */
/*   Updated: 2019/12/08 20:47:50 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXADEC_H
# define FT_HEXADEC_H

# include <string.h>
# include <inttypes.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_itoa.h"
# include "ft_putstr.h"
# include "ft_num2char.h"
# include "ft_intwidth.h"

int8_t	ft_hexadec(t_mainlist *param, va_list ap);
int8_t	ft_hex(t_mainlist *param, va_list ap);
int64_t	ft_hex_length(t_mainlist *param, va_list ap);
char	*ft_hex_octothorpe(char *temp);
char	*ft_hex_x(char *temp);

#endif
