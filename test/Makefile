# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/25 20:55:49 by esupatae          #+#    #+#              #
#    Updated: 2019/09/25 20:55:52 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mytest
SRCS = ../src/*.c
HEADER = ../includes/
INPUT = "Hello Angel!"
INPUT2 = "Eldar Supataev"
OUT = a.out
SANIT = -fsanitize=address
TEST_CASES :=   test_strnstr test_strcmp test_strlcat test_memset \
				test_bzero test_memcpy test_memccpy test_memmove test_memchr \
				test_atoi test_putstr test_putnbr test_strnew test_memalloc \
				test_memdel test_striter test_striteri test_strmap test_strmapi \
				test_strequ test_strnequ test_strsub test_strtrim test_strjoin \
				test_putendl test_fd test_itoa test_strsplit test_lstmap

all: $(NAME)

$(NAME):
	@echo "All is good!"

clean:
	@rm -f $(OUT)
	@rm -rf $(OUT).dSYM

test:
	@gcc test.c $(SRCS) -I $(HEADER)
	@./$(OUT) $(INPUT) | cat -e

test1:
	@gcc test1.c $(SRCS) -I $(HEADER)
	@./$(OUT) $(INPUT2) | cat -e

test2:
	@gcc test2.c $(SRCS) -I $(HEADER)
	@./$(OUT) | cat -e

$(TEST_CASES):
	@gcc $@.c $(SRCS) -I $(HEADER) -g
	@./$(OUT)