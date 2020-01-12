# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboris <eboris@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 15:16:46 by eboris            #+#    #+#              #
#    Updated: 2020/01/12 17:30:54 by eboris           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/
HEADERS = ./includes/
LIB_FILES = ft_printf.c \
			ft_lists.c ft_putstr.c ft_strcpys.c ft_strdups.c ft_strs.c \
			ft_parsing.c ft_strpercent.c ft_atoi.c ft_itoa.c ft_null.c ft_remparam.c \
			ft_flags.c ft_width.c ft_precision.c ft_length.c ft_type.c \
			ft_typefun.c ft_strings.c ft_stringwidth.c ft_char.c ft_charwidth.c \
			ft_integer.c ft_num2char.c ft_num2charhhh.c ft_num2charjtzl.c \
			ft_intwidth.c ft_integeru.c ft_numu2char.c ft_numu2charhhh.c \
			ft_numu2charjtzl.c ft_float.c ft_float_floor.c \
			ft_fixmanissa.c ft_ld_arr.c ft_ld_refix.c ft_ld_rounding.c \
			ft_ldouble_ceiling.c ft_ldouble_floor.c ft_float_naninf.c \
			ft_float_refix.c ft_float_arr.c ft_float_ceiling.c ft_float_rounding.c \
			ft_octal.c ft_hexadec.c ft_binary.c
O_FILES = $(LIB_FILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(O_FILES):
			gcc -c $(addprefix $(SRCS), $(LIB_FILES)) -I $(HEADERS) $(FLAGS)

$(NAME): $(O_FILES)
			ar rc $(NAME) $(O_FILES)

clean:
			rm -rf $(O_FILES)

fclean: clean
			rm -rf $(NAME)

re: fclean all
