# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 15:58:04 by lbrangie          #+#    #+#              #
#    Updated: 2017/12/04 14:40:56 by lbrangie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fillit

SRCS	=	ft_error.c				\
			ft_error_list.c			\
			ft_ftos.c				\
			ft_get_connec.c			\
			ft_get_nb_tetra.c		\
			ft_set_list.c			\
			main.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	+=	-Wall -Wextra -Werror

RM		=	rm -f

RED		=	\033[31m
GRN		=	\033[32m
YLW		=	\033[33m
BLU		=	\033[34m
LBLU	=	\033[94m
MGT		=	\033[35m
CYN		=	\033[36m
GRE		=	\033[90m
ORG		=	\033[38;5;202m
RCLRS	=	\033[39m
BOLD	=	\033[1m
UNDER	=	\033[4m
RALL	=	\033[0m
CHECK	=	✔
CROSS	=	✘
HGLSS	=	⧗
RAROW	=	➜

all		:	$(NAME)

%.o		:	%.c
	@$(CC) $(CFLAGS) -o $@ -c $<
#	@echo "\t$(UNDER)$(BOLD)Compiled$(RALL) : $^ $(GRN)$(CHECK)$(RCLRS)"

start	:
	@echo "\t$(BOLD)$(UNDER)Compiling$(RALL) SRCS to OBJS $(LBLU)$(HGLSS)$(RALL)\n\t\tPlease, wait..."

$(NAME)	:	start $(OBJS)
	@echo "\t$(BOLD)Compilation done$(RALL) $(GRN)$(CHECK)$(RCLRS)"
	@$(AR) $@ $(OBJS)
	@$(RAN) $@
	@echo "\t$(UNDER)$(BOLD)Compiled$(RALL) : $@ $(GRN)$(CHECK)$(RCLRS)"

clean	:
	@$(RM) $(OBJS)
	@echo "\t$(UNDER)$(BOLD)Removed$(RUNDER)$(RALL) : OBJS $(GRN)$(CHECK)$(RCLRS)"

fclean	:	clean
	@$(RM) $(NAME)
	@echo "\t$(UNDER)$(BOLD)Removed$(RUNDER)$(RALL) : $(NAME) $(GRN)$(CHECK)$(RCLRS)"

re		:	fclean all

rainbow	:
	@echo "            $(RED)#######$(CLRS)"
	@echo "         $(RED)###$(ORG)#######$(RED)###$(CLRS)"
	@echo "       $(RED)##$(ORG)###$(YLW)#######$(ORG)###$(RED)##$(CLRS)"
	@echo "      $(RED)#$(ORG)##$(YLW)###$(GRN)#######$(YLW)###$(ORG)##$(RED)#$(CLRS)"
	@echo "     $(RED)#$(ORG)##$(YLW)##$(GRN)##$(CYN)#######$(GRN)##$(YLW)##$(ORG)##$(RED)#$(CLRS)"
	@echo "    $(RED)#$(ORG)#$(YLW)##$(GRN)##$(CYN)##$(LBLU)#######$(CYN)##$(GRN)##$(YLW)##$(ORG)#$(RED)#$(CLRS)"
	@echo "   $(RED)#$(ORG)#$(YLW)##$(GRN)#$(CYN)##$(LBLU)##$(MGT)#######$(LBLU)##$(CYN)##$(GRN)#$(YLW)##$(ORG)#$(RED)#$(CLRS)"
	@echo "  $(RED)#$(ORG)##$(YLW)#$(GRN)#$(CYN)##$(LBLU)#$(MGT)###     ###$(LBLU)#$(CYN)##$(GRN)#$(YLW)#$(ORG)##$(RED)#$(CLRS)"
	@echo "  $(RED)#$(ORG)#$(YLW)#$(GRN)#$(CYN)##$(LBLU)#$(MGT)##         ##$(LBLU)#$(CYN)##$(GRN)#$(YLW)#$(ORG)#$(RED)#$(CLRS)"
	@echo " $(RED)#$(ORG)#$(YLW)##$(GRN)#$(CYN)#$(LBLU)#$(MGT)#             #$(LBLU)#$(CYN)#$(GRN)#$(YLW)##$(ORG)#$(RED)#$(CLRS)"
	@echo " $(RED)#$(ORG)#$(YLW)#$(GRN)#$(CYN)#$(LBLU)#$(MGT)##             ##$(LBLU)#$(CYN)#$(GRN)#$(YLW)#$(ORG)#$(RED)#$(CLRS)"
	@echo " $(RED)#$(ORG)#$(YLW)#$(GRN)#$(CYN)#$(LBLU)#$(MGT)#    $(RED)R$(ORG)A$(YLW)I$(GRN)N$(CYN)B$(LBLU)O$(MGT)W    #$(LBLU)#$(CYN)#$(GRN)#$(YLW)#$(ORG)#$(RED)#$(CLRS)"
	@echo "$(RED)#$(ORG)#$(YLW)#$(GRN)#$(CYN)#$(LBLU)#$(MGT)##               ##$(LBLU)#$(CYN)#$(GRN)#$(YLW)#$(ORG)#$(RED)#$(CLRS)"
	@echo "$(RED)#$(ORG)#$(YLW)#$(GRN)#$(CYN)#$(LBLU)#$(MGT)#                 #$(LBLU)#$(CYN)#$(GRN)#$(YLW)#$(ORG)#$(RED)#$(CLRS)"
	@echo "$(RED)#$(ORG)#$(YLW)#$(GRN)#$(CYN)#$(LBLU)#$(MGT)#                 #$(LBLU)#$(CYN)#$(GRN)#$(YLW)#$(ORG)#$(RED)#$(CLRS)"
	@echo "$(RED)#$(ORG)#$(YLW)#$(GRN)#$(CYN)#$(LBLU)#$(MGT)#                 #$(LBLU)#$(CYN)#$(GRN)#$(YLW)#$(ORG)#$(RED)#$(CLRS)"

.PHONY	:	all, clean, fclean, re, start, rainbow
