# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbarbate <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 10:45:24 by jbarbate          #+#    #+#              #
#    Updated: 2022/12/07 14:53:02 by jbarbate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc
SRCS = src/main.c src/stack.c src/instructions_1.c src/instructions_2.c \
	   src/free.c src/parsing.c src/algo_3.c src/algo_2.c src/dispatch.c \
	   src/algo_5.c
HEADER = libft/libft.a
OBJS = ${SRCS:.c=.o}
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:lib ${OBJS}
	${GCC} ${CFLAGS} -o ${NAME} ${HEADER} ${OBJS}
lib:
	@make -C libft all

all: ${OBJS} ${NAME}

clean: libclean
	@rm -f ${OBJS}
	@echo Everything is clean

libclean:
	@make -C libft fclean

fclean: clean
	@rm -f ${NAME}

re: fclean all
