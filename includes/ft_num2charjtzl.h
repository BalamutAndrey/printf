/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2charjtzl.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:42:48 by eboris            #+#    #+#             */
/*   Updated: 2019/11/21 19:52:13 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUM2CHARJTZL_H
# define FT_NUM2CHARJTZL_H

# include <string.h>
# include <inttypes.h>
# include <stddef.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_num2char.h"

char	*ft_num2charj(t_mainlist *param, int64_t num, int8_t minus, int64_t i);
char	*ft_num2chart(t_mainlist *param, int64_t num, int8_t minus, int64_t i);
char	*ft_num2charz(t_mainlist *param, int64_t num, int8_t minus, int64_t i);

#endif
