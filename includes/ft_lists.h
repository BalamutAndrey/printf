/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:59:12 by eboris            #+#    #+#             */
/*   Updated: 2019/11/10 16:36:27 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LISTS_H
# define FT_LISTS_H

# include <stdlib.h>
# include <string.h>
# include "ft_mainlist.h"
# include "ft_strs.h"

t_mainlist	*ft_printf_mainlist(t_mainlist *param);
int			ft_remove_mainlist(t_mainlist *param);

#endif
