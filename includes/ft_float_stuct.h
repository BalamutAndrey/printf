/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_stuct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:31:12 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:37:00 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_STUCT_H
# define FT_FLOAT_STUCT_H

# include <stdint.h>

typedef union		u_float
{
	double			f;
	struct			s_comp
	{
		uint64_t	mantissa	: 52;
		uint64_t	exponent	: 11;
		uint64_t	sign		: 1;
	}				t_comp;
}					t_float;

typedef struct		s_lngdouble
{
	long double		num;
	char			*mantissa;
	int64_t			exponent;
	int64_t			sing;
}					t_lngdouble;

typedef union		u_ldouble
{
	long double		f;
	struct			s_ldcomp
	{
		uint64_t	mantissa	: 64;
		uint64_t	exponent	: 15;
		uint64_t	sign		: 1;
	}				t_ldcomp;
}					t_ldouble;

typedef struct		s_double
{
	double			num;
	char			*mantissa;
	int64_t			exponent;
	int64_t			sing;
}					t_double;

#endif
