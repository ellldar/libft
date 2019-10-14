# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esupatae <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 11:40:06 by esupatae          #+#    #+#              #
#    Updated: 2019/09/23 03:08:53 by esupatae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRCS := src/*.c
HEADER := includes/
FLAGS := -Wall -Wextra -Werror
OBJ_DIR := obj
TEST_DIR := test
TEST_CASES :=   test test1 test2 test_strnstr test_strcmp test_strlcat test_memset \
				test_bzero test_memcpy test_memccpy test_memmove test_memchr \
				test_atoi test_putstr test_putnbr test_strnew test_memalloc \
				test_memdel test_striter test_striteri test_strmap test_strmapi \
				test_strequ test_strnequ test_strsub test_strtrim test_strjoin \
				test_putendl test_fd test_itoa test_strsplit test_lstmap

all: $(NAME)

$(NAME): $(OBJ_DIR)
	@gcc -c $(SRCS) -I $(HEADER)
	@mv ft_*.o $<
	@ar rc $(NAME) $(OBJ_DIR)/*.o
	@ranlib $(NAME)

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@rm -f $(OBJ_DIR)/*.o
	@rm -rf $(OBJ_DIR)
	@rm -f a.out
	@rm -rf a.out.dSYM
	@make -C $(TEST_DIR) clean

fclean: clean
	@rm -f $(NAME)

re: fclean all

norm:
	@norminette $(SRCS)

$(TEST_CASES):
	@make -C $(TEST_DIR) $@