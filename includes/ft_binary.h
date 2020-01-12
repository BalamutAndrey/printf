/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 14:49:34 by eboris            #+#    #+#             */
/*   Updated: 2019/12/12 14:54:58 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BINARY_H
# define FT_BINARY_H

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

int8_t	ft_binary(t_mainlist *param, va_list ap);
int8_t	ft_bin(t_mainlist *param, va_list ap);
int64_t	ft_bin_length(t_mainlist *param, va_list ap);
char	*ft_bin_octothorpe(char *temp);
char	*ft_bin_x(char *temp);

#endif
