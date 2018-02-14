# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 15:58:04 by lbrangie          #+#    #+#              #
#    Updated: 2018/02/14 14:08:54 by lbrangie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
##                                   TARGET                                   ##
################################################################################
NAME			=		libft.a

################################################################################
##                                   SOURCES                                  ##
################################################################################
# ============================== DIRECTORIES ============================== #
SRCS_DIR		=		srcs/
SRCS_DIR_LIBFT	=		libft/
SRCS_DIR_GNL	=		gnl/

# ================================= FILES ================================= #
FILES_LIBFT		=		ft_abs.c				\
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
						ft_itoa_base.c			\
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
						ft_numlen_base.c		\
						ft_pgcd.c				\
						ft_power.c				\
						ft_ppcm.c				\
						ft_putchar.c			\
						ft_putchar_endl.c		\
						ft_putchar_endl_fd.c	\
						ft_putchar_fd.c			\
						ft_putnbr.c				\
						ft_putnbr_fd.c			\
						ft_putstr.c				\
						ft_putstr_endl.c		\
						ft_putstr_endl_fd.c		\
						ft_putstr_fd.c			\
						ft_puttab.c				\
						ft_puttab_fd.c			\
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
						ft_strcspn.c			\
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
						ft_strspn.c				\
						ft_strstr.c				\
						ft_strsub.c				\
						ft_strtrim.c			\
						ft_tolower.c			\
						ft_toupper.c

FILES_GNL		=		get_next_line.c


# ================================ SOURCES ================================ #
SRCS_LIBFT		=		$(addprefix $(SRCS_DIR_LIBFT), $(FILES_LIBFT))
SRCS_GNL		=		$(addprefix $(SRCS_DIR_GNL), $(FILES_GNL))
SRCS			=		$(addprefix $(SRCS_DIR), $(SRCS_LIBFT)) \
						$(addprefix $(SRCS_DIR), $(SRCS_GNL))


################################################################################
##                                   OBJECTS                                  ##
################################################################################
# ============================== DIRECTORIES ============================== #
OBJS_DIR		=		objs/
OBJS_DIR_LIBFT	=		libft/
OBJS_DIR_GNL	=		gnl/

# ================================ OBJECTS ================================ #
OBJS_LIBFT		=		$(addprefix $(OBJS_DIR_LIBFT), $(FILES_LIBFT:.c=.o))
OBJS_GNL		=		$(addprefix $(OBJS_DIR_GNL), $(FILES_GNL:.c=.o))
OBJS			=		$(addprefix $(OBJS_DIR), $(OBJS_LIBFT)) \
						$(addprefix $(OBJS_DIR), $(OBJS_GNL))


################################################################################
##                                  COMPILING                                 ##
################################################################################
# ============================== COMPILATOR =============================== #
CC				=		gcc
CFLAGS			+=		-Wall -Wextra -Werror
	
# =============================== INCLUDES ================================ #
INC_DIR			=		includes/
INC_FILE		=		libft.h					\
						get_next_line.h
INC_COMP		=		-I$(INC_DIR)

# =============================== LIBRARIES =============================== #
LIB_NAME		=		ft
LIB_PATH		=		./lib$(LIB_NAME)
LIB_COMP		=		-Llib$(LIB_NAME) -l$(LIB_NAME)
LIB_ARCV		=		lib$(LIB_NAME).a
AR				=		ar rc
RAN				=		ranlib

# ================================ SLAVES ================================= #
MAKESLV			=		make -C


################################################################################
##                                  DELETION                                  ##
################################################################################
RM				=		rm -f
RM_DIR			=		rm -rfd


################################################################################
##                                   DISPLAY                                  ##
################################################################################
# ================================ COLORS ================================= #
RED				=		\033[31m
ORG				=		\033[38;5;202m
GRN				=		\033[32m
YLW				=		\033[33m
BLU				=		\033[34m
LBLU			=		\033[94m
MGT				=		\033[35m
PRL				=		\033[38;5;55m
CYN				=		\033[36m
GRE				=		\033[90m
SLM				=		\033[38;5;203m

# ================================ FORMAT ================================= #
BOLD			=		\033[1m
UNDER			=		\033[4m
DIM				=		\033[2m
EOF				=		\033[0m

# ============================== CHARACTERS =============================== #
CHECK			=		\\xE2\\x9C\\x94
CROSS			=		\\xE2\\x9C\\x98
HGLSS			=		\\xE2\\xA7\\x97
RAROW			=		\\xE2\\x9E\\x9C
COPYR			=		\\xC2\\xA9

# ================================ MACROS ================================= #
OK				=		$(GRN)$(CHECK)$(EOF)
KO				=		$(RED)$(CROSS)$(EOF)
WAIT			=		$(LBLU)$(HGLSS)$(EOF)
ARROW			=		$(LBLU)$(RAROW)$(EOF)
COFFE			=		\t  S\n\t$(UNDER)C[_]$(EOF)


################################################################################
##                                    RULES                                   ##
################################################################################

all				:		$(NAME)

proper			:
	@$(MAKESLV) . all
	@$(MAKESLV) . clean

$(OBJS_DIR)%.o	:		$(SRCS_DIR)%.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(INC_COMP)
	@echo "\t$(UNDER)$(BOLD)Compiled$(EOF) : $^ $(OK)"

$(OBJS_DIR)		:
	@mkdir -p $@
	@echo "\t$(UNDER)$(BOLD)Created$(EOF) : $@/ $(OK)"
	@mkdir -p $@/$(OBJS_DIR_LIBFT)
	@echo "\t$(UNDER)$(BOLD)Created$(EOF) : $@/$(OBJS_DIR_LIBFT) $(OK)"
	@mkdir -p $@/$(OBJS_DIR_GNL)
	@echo "\t$(UNDER)$(BOLD)Created$(EOF) : $@/$(OBJS_DIR_GNL) $(OK)"

start			:
	@echo "\t$(BOLD)$(UNDER)Compiling$(EOF) SRCS to OBJS $(WAIT)\n\t\tPlease, wait..."

$(NAME)			:		$(OBJS_DIR) start $(OBJS)
	@echo "\t$(BOLD)Compilation done$(EOF) $(OK)"
	@$(AR) $@ $(OBJS) 
	@$(RAN) $@
	@echo "\t$(UNDER)$(BOLD)Compiled$(EOF) : $@ $(OK)"

clean			:
	@$(RM_DIR) $(OBJS_DIR)
	@echo "\t$(UNDER)$(BOLD)Removed$(EOF) : OBJS $(OK)"

fclean			:		clean
	@$(RM) $(NAME)
	@echo "\t$(UNDER)$(BOLD)Removed$(EOF) : $(NAME) $(OK)"

re				:
	@$(MAKESLV) . fclean
	@$(MAKESLV) . all

norme 			:		$(INC_DIR) $(SRCS_DIR)
	@norminette $^ | grep -B 1 "Warning\|Error" || true

coffee			:
	@echo "Here's a cup of coffee\n$(COFFE)"

rainbow			:
	@echo "                        $(RED)# # # # # # # $(EOF)"
	@echo "                  $(RED)# # # $(ORG)# # # # # # # $(RED)# # #$(EOF)"
	@echo "              $(RED)# # $(ORG)# # # $(YLW)# # # # # # # $(ORG)# # # $(RED)# # $(EOF)"
	@echo "            $(RED)# $(ORG)# # $(YLW)# # # $(GRN)# # # # # # # $(YLW)# # # $(ORG)# # $(RED)# $(EOF)"
	@echo "          $(RED)# $(ORG)# # $(YLW)# # $(GRN)# # $(CYN)# # # # # # # $(GRN)# # $(YLW)# # $(ORG)# # $(RED)# $(EOF)"
	@echo "        $(RED)# $(ORG)# $(YLW)# # $(GRN)# # $(CYN)# # $(LBLU)# # # # # # # $(CYN)# # $(GRN)# # $(YLW)# # $(ORG)# $(RED)# $(EOF)"
	@echo "      $(RED)# $(ORG)# $(YLW)# # $(GRN)# $(CYN)# # $(LBLU)# # $(PRL)# # # # # # # $(LBLU)# # $(CYN)# # $(GRN)# $(YLW)# # $(ORG)# $(RED)# $(EOF)"
	@echo "    $(RED)# $(ORG)# # $(YLW)# $(GRN)# $(CYN)# # $(LBLU)# $(PRL)# # #          # # # $(LBLU)# $(CYN)# # $(GRN)# $(YLW)# $(ORG)# # $(RED)#$(EOF)"
	@echo "    $(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# # $(LBLU)# $(PRL)# #                   # # $(LBLU)# $(CYN)# # $(GRN)# $(YLW)# $(ORG)# $(RED)#$(EOF)"
	@echo "  $(RED)# $(ORG)# $(YLW)# # $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                           # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# # $(ORG)# $(RED)#$(EOF)"
	@echo "  $(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)# #                           # # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(EOF)"
	@echo "  $(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#         $(RED)R $(ORG)A $(YLW)I $(GRN)N $(CYN)B $(LBLU)O $(PRL)W         # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(EOF)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)# #                               # # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(EOF)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                                   # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(EOF)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                                   # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(EOF)"
	@echo "$(RED)# $(ORG)# $(YLW)# $(GRN)# $(CYN)# $(LBLU)# $(PRL)#                                   # $(LBLU)# $(CYN)# $(GRN)# $(YLW)# $(ORG)# $(RED)#$(EOF)"
	@echo "\t\t\t\t\t\t$(COPYR) lbrangie <lbrangie@student.42.fr>"

.PHONY		:		all clean fclean re start norme coffee rainbow
