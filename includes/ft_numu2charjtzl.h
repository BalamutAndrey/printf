/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numu2charjtzl.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:26:42 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 13:27:29 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMU2CHARJTZL_H
# define FT_NUMU2CHARJTZL_H

# include <string.h>
# include <inttypes.h>
# include <stddef.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_numu2char.h"

char	*ft_numu2charj(t_mainlist *param, uint64_t num, int64_t i);
char	*ft_numu2chart(t_mainlist *param, uint64_t num, int64_t i);
char	*ft_numu2charz(t_mainlist *param, uint64_t num, int64_t i);

#endif
