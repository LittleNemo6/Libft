# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 15:58:04 by lbrangie          #+#    #+#              #
#    Updated: 2018/02/14 13:12:40 by lbrangie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_abs.c				\
			ft_atoi.c				\
			ft_bzero.c				\
			ft_cntwrd.c				\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isblank.c			\
			ft_iscntrl.c			\
			ft_isdigit.c			\
			ft_isgraph.c			\
			ft_islower.c			\
			ft_isneg.c				\
			ft_isprint.c			\
			ft_ispunct.c			\
			ft_isspace.c			\
			ft_isupper.c			\
			ft_isxdigit.c			\
			ft_itoa.c				\
			ft_lstadd.c				\
			ft_lstdel.c				\
			ft_lstdelone.c			\
			ft_lstiter.c			\
			ft_lstmap.c				\
			ft_lstnew.c				\
			ft_memalloc.c			\
			ft_memccpy.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memcpy.c				\
			ft_memdel.c				\
			ft_memmove.c			\
			ft_memset.c				\
			ft_numlen.c				\
			ft_putchar.c			\
			ft_putchar_fd.c			\
			ft_putendl.c			\
			ft_putendl_fd.c			\
			ft_putnbr.c				\
			ft_putnbr_fd.c			\
			ft_putstr.c				\
			ft_putstr_fd.c			\
			ft_puttab.c				\
			ft_puttab_fd.c			\
			ft_str_is_alpha.c		\
			ft_str_is_lowercase.c	\
			ft_str_is_numeric.c		\
			ft_str_is_printable.c	\
			ft_str_is_uppercase.c	\
			ft_strcapitalize.c		\
			ft_strcat.c				\
			ft_strchr.c				\
			ft_strclen.c			\
			ft_strclr.c				\
			ft_strcmp.c				\
			ft_strcpy.c				\
			ft_strdel.c				\
			ft_strdup.c				\
			ft_strequ.c				\
			ft_striter.c			\
			ft_striteri.c			\
			ft_strjoin.c			\
			ft_strlcat.c			\
			ft_strlen.c				\
			ft_strlowcase.c			\
			ft_strmap.c				\
			ft_strmapi.c			\
			ft_strncat.c			\
			ft_strncmp.c			\
			ft_strncpy.c			\
			ft_strndup.c			\
			ft_strnequ.c			\
			ft_strnew.c				\
			ft_strnlen.c			\
			ft_strnstr.c			\
			ft_strpbrk.c			\
			ft_strrchr.c			\
			ft_strrev.c				\
			ft_strsplit.c			\
			ft_strstr.c				\
			ft_strsub.c				\
			ft_strtrim.c			\
			ft_strupcase.c			\
			ft_tolower.c			\
			ft_toupper.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	+=	-Wall -Wextra -Werror

INC		=	-I includes

AR		=	ar rc

RM		=	rm -f

RAN		=	ranlib


all		:	$(NAME)

%.o		:	%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME)	:	$(OBJS)
	$(AR) $@ $^
	$(RAN) $@

clean	:
	@$(RM) $(OBJS)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all, clean, fclean, re
