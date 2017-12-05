# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 15:58:04 by lbrangie          #+#    #+#              #
#    Updated: 2017/12/05 14:09:54 by lbrangie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

			#################
			##  VARIABLES  ##
			#################

NAME	=	libft.a
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

OBJS	=	$(SRCS:.c=.o)
CC		=	gcc
CFLAGS	+=	-Wall -Wextra -Werror
AR		=	ar rc
RM		=	rm -f
RAN		=	ranlib


			#################
			##    MACROS   ##
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
RALL	=	\033[0m
# ============== #

# === CHARAC === #
CHECK	=	✔
CROSS	=	✘
HGLSS	=	⧗
RAROW	=	➜
# ============== #


			#################
			##    RULES    ##
			#################

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

test :
	@echo "$(RED)test red$(RALL)"
	@echo "$(ORG)test orange$(RALL)"
	@echo "$(GRN)test green$(RALL)"
	@echo "$(BLU)test blue$(RALL)"
	@echo "$(LBLU)test light blue$(RALL)\n"
	@echo "$(YLW)test yellow$(RALL)"
	@echo "$(CYN)test cyan$(RALL)"
	@echo "$(MGT)test magenta$(RALL)"
	@echo "$(PRL)test purple$(RALL)\n"
	@echo "$(SLM)test salmon$(RALL)"


skull	:
	@echo "                    :PB@Bk:"
	@echo "                ,jB@@B@B@B@BBL."
	@echo "             7G@B@B@BMMMMMB@B@B@Nr"
	@echo "         :kB@B@@@MMOMOMOMOMMMM@B@B@B1,"
	@echo "     :5@B@B@B@BBMMOMOMOMOMOMOMM@@@B@B@BBu."
	@echo "  70@@@B@B@B@BXBBOMOMOMOMOMOMMBMPB@B@B@B@B@Nr"
	@echo "G@@@BJ iB@B@@  OBMOMOMOMOMOMOM@2  B@B@B. EB@B@S"
	@echo "@@BM@GJBU.  iSuB@OMOMOMOMOMOMM@OU1:  .kBLM@M@B@"
	@echo "B@MMB@B       7@BBMMOMOMOMOMOBB@:       B@BMM@B"
	@echo "@@@B@B         7@@@MMOMOMOMM@B@:         @@B@B@"
	@echo "@@OLB.          BNB@MMOMOMM@BEB          rBjM@B"
	@echo "@@  @           M  OBOMOMM@q  M          .@  @@"
	@echo "@@OvB           B:u@MMOMOMMBJiB          .BvM@B"
	@echo "@B@B@J         0@B@MMOMOMOMB@B@u         q@@@B@"
	@echo "B@MBB@v       G@@BMMMMMMMMMMMBB@5       F@BMM@B"
	@echo "@BBM@BPNi   LMEB@OMMMM@B@MMOMM@BZM7   rEqB@MBB@"
	@echo "B@@@BM  B@B@B  qBMOMB@B@B@BMOMBL  B@B@B  @B@B@M"
	@echo " J@@@@PB@B@B@B7G@OMBB.   ,@MMM@qLB@B@@@BqB@BBv"
	@echo "    iGB@,i0@M@B@MMO@E  :  M@OMM@@@B@Pii@@N:"
	@echo "       .   B@M@B@MMM@B@B@B@MMM@@@M@B"
	@echo "           @B@B.i@MBB@B@B@@BM@::B@B@"
	@echo "           B@@@ .B@B.:@B@ :B@B  @B@O"
	@echo "             :0 r@B@  B@@ .@B@: P:"
	@echo "                 vMB :@B@ :BO7"
	@echo "                     ,B@B"

.PHONY	:	all, clean, fclean, re, start, rainbow
