/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2charhhh.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:44:57 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 15:41:13 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUM2CHARHHH_H
# define FT_NUM2CHARHHH_H

# include <string.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_num2char.h"
# include "ft_num2charjtzl.h"

char	*ft_num2charhhh(t_mainlist *param, int64_t num,
						int8_t minus, int64_t i);
char	*ft_num2charhh(t_mainlist *param, int64_t num, int8_t minus, int64_t i);
char	*ft_num2charh(t_mainlist *param, int64_t num, int8_t minus, int64_t i);
char	*ft_num2charl(t_mainlist *param, int64_t num, int8_t minus, int64_t i);
char	*ft_num2charll(t_mainlist *param, int64_t num, int8_t minus, int64_t i);

#endif
