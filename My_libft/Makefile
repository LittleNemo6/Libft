# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 15:58:04 by lbrangie          #+#    #+#              #
#    Updated: 2017/12/08 20:51:54 by lbrangie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	#################
	##   TARGET    ##
	#################
NAME	=	libft.a

	#################
	##   SOURCES   ##
	#################
SRCS	=	ft_abs.c				\
			ft_atoi.c				\
			ft_bzero.c				\
			ft_cntwrd.c				\
			ft_factorial.c			\
			ft_fibonacci.c			\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isblank.c			\
			ft_iscntrl.c			\
			ft_isdigit.c			\
			ft_isgraph.c			\
			ft_islower.c			\
			ft_isneg.c				\
			ft_isprime.c			\
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
			ft_nextprime.c			\
			ft_numlen.c				\
			ft_pgcd.c				\
			ft_power.c				\
			ft_ppcm.c				\
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
			ft_segfault.c			\
			ft_sqrt.c				\
			ft_str_isalnum.c		\
			ft_str_isalpha.c		\
			ft_str_isascii.c		\
			ft_str_isblank.c		\
			ft_str_iscntrl.c		\
			ft_str_isdigit.c		\
			ft_str_isgraph.c		\
			ft_str_islower.c		\
			ft_str_isprint.c		\
			ft_str_ispunct.c		\
			ft_str_isspace.c		\
			ft_str_isupper.c		\
			ft_str_isxdigit.c		\
			ft_str_tolower.c		\
			ft_str_toupper.c		\
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
			ft_tolower.c			\
			ft_toupper.c			\
			ft_void.c

	#################
	##   OBJECTS   ##
	#################
OBJS	=	$(SRCS:.c=.o)
	
	#################
	##  COMPILING  ##
	#################

# = COMPILATOR = #
CC		=	gcc
CFLAGS	+=	-Wall -Wextra -Werror
# ============== #
	
# == INCLUDES == #
INC		=	-Iincludes
# ============== #

# ==== LIB ===== #
LIB		=	-Llibft -lft
AR		=	ar rc
RAN		=	ranlib
# ============== #

# === SLAVES === #
MAKESLV	=	make -C
# ============== #

	#################
	##  DELETION   ##
	#################
RM		=	rm -f

	#################
	##   DISPLAY   ##
	#################

# === COLORS === #
RED		=	\033[31m
ORG		=	\033[38;5;202m
GRN		=	\033[32m
YLW		=	\033[33m
BLU		=	\033[34m
LBLU	=	\033[94m
MGT		=	\033[35m
PRL		=	\033[38;5;55m
CYN		=	\033[36m
GRE		=	\033[90m
RCLRS	=	\033[39m
SLM		=	\033[38;5;203m
# ============== #

# === FORMAT === #
BOLD	=	\033[1m
UNDER	=	\033[4m
DIM		=	\033[2m
RALL	=	\033[0m
# ============== #

# === CHARAC === #
CHECK	=	\\xE2\\x9C\\x94
CROSS	=	\\xE2\\x9C\\x98
HGLSS	=	\\xE2\\xA7\\x97
RAROW	=	\\xE2\\x9E\\x9C
# ============== #

# === MACROS === #
OK		=	$(GRN)$(CHECK)$(RCLRS)
KO		=	$(RED)$(CROSS)$(RCLRS)
WAIT	=	$(LBLU)$(HGLSS)$(RCLRS)
ARROW	=	$(LBLU)$(RAROW)$(RCLRS)
# ============== #

			#################
			##    RULES    ##
			#################

all		:	$(NAME)

proper	:	all clean

%.o		:	%.c
	@$(CC) $(CFLAGS) -o $@ -c $<
#	@echo "\t$(UNDER)$(BOLD)Compiled$(RALL) : $^ $(GRN)$(CHECK)$(RCLRS)"

start	:
	@echo "\t$(BOLD)$(UNDER)Compiling$(RALL) SRCS to OBJS $(WAIT)\n\t\tPlease, wait..."

$(NAME)	:	start $(OBJS)
	@echo "\t$(BOLD)Compilation done$(RALL) $(OK)"
	@$(AR) $@ $(OBJS)
	@$(RAN) $@
	@echo "\t$(UNDER)$(BOLD)Compiled$(RALL) : $@ $(OK)"

clean	:
	@$(RM) $(OBJS)
	@echo "\t$(UNDER)$(BOLD)Removed$(RUNDER)$(RALL) : OBJS $(OK)"

fclean	:	clean
	@$(RM) $(NAME)
	@echo "\t$(UNDER)$(BOLD)Removed$(RUNDER)$(RALL) : $(NAME) $(OK)"

re		:	fclean all

test	:
	@echo "$(DIM)test$(RALL)"

rainbow	:
	@echo "                        $(RED)# # # # # # # $(CLRS)"
	@echo "                  $(RED)# # # $(ORG)# # # # # # # $(RED)# # #$(CLRS)"
	@echo "              $(RED)# # $(ORG)# # # $(YLW)# # # # # # # $(ORG)# # # $(RED)# # $(CLRS)"
	@echo "            $(RED)# $(ORG)# # $(YLW)# # # $(GRN)# # # # # # # $(YLW)# # # $(ORG)# # $(RED)# $(CLRS)"
	@echo "          $(RED)# $(ORG)# # $(YLW)# # $(GRN)# # $(CYN)# # # # # # # $(GRN)# # $(YLW)# # $(ORG)# # $(RED)# $(CLRS)"
	@echo "        $(RED)# $(ORG)# $(YLW)# # $(GRN)# # $(CYN)# # $(LBLU)# # # # # # # $(CYN)# # $(GRN)# # $(YLW)# # $(ORG)# $(RED)# $(CLRS)"
	@echo "      $(RED)# $(ORG)# $(YLW)# # $(GRN)# $(CYN)# # $(LBLU)# # $(PRL)# # # # # # # $(LBLU)# # $(CYN)# # $(GRN)# $(YLW)# # $(ORG)# $(RED)# $(CLRS)"
	@echo "    $(RED)# $(ORG)# # $(YLW)# $(GRN)# $(CYN)# # $(LBLU)# $(PRL)# # #          # # # $(LBLU)# $(CYN)# # $(GRN)# $(YLW)# $(ORG)# # $(RED)#$(CLRS)"
	@echo "    $(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# # $(LBLU)# $(PRL)# #                   # # $(LBLU)# $(CYN)# # $(GRN)# $(YLW)# $(ORG)# $(RED)#$(CLRS)"
	@echo "  $(RED)# $(ORG)# $(YLW)# # $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                           # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# # $(ORG)# $(RED)#$(CLRS)"
	@echo "  $(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)# #                           # # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(CLRS)"
	@echo "  $(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#         $(RED)R $(ORG)A $(YLW)I $(GRN)N $(CYN)B $(LBLU)O $(PRL)W         # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(CLRS)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)# #                               # # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(CLRS)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                                   # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(CLRS)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                                   # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(CLRS)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                                   # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(CLRS)"

.PHONY	:	all clean fclean re start rainbow
