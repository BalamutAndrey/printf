/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2char.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:19:34 by eboris            #+#    #+#             */
/*   Updated: 2019/11/21 18:41:16 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUM2CHAR_H
# define FT_NUM2CHAR_H

# include <stdlib.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_num2charhhh.h"
# include "ft_strs.h"

char	*ft_num2char(t_mainlist *param, int64_t num);
char	*ft_num2charlength(t_mainlist *param, int64_t num,
							int8_t minus, int64_t i);
char	*ft_num2charwr(t_mainlist *param, int64_t num, int8_t minus, int64_t i);
char	*ft_num2charprecision(t_mainlist *param, char *str);
char	*ft_num2charzero(t_mainlist *param, char *str, int64_t z, char y);

#endif
