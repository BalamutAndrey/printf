/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mainlist.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 17:50:22 by eboris            #+#    #+#             */
/*   Updated: 2019/11/23 16:28:06 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAINLIST_H
# define FT_MAINLIST_H

# include <stdint.h>

typedef struct		s_mainlist
{
	int32_t			fd;
	int16_t			offset;
	int8_t			flags;
	int8_t			fl_minus;
	int8_t			fl_plus;
	int8_t			fl_space;
	int8_t			fl_octothorpe;
	int8_t			fl_zero;
	int32_t			width;
	int32_t			precision;
	int8_t			length;
	int8_t			type;
	uint64_t		line_length;
	char			*line;
}					t_mainlist;

#endif
