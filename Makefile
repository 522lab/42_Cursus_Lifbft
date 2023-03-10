# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 17:57:12 by nsuphasa          #+#    #+#              #
#    Updated: 2023/03/12 13:56:29 by nsuphasa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS =	-Wall -Wextra -Werror
NAME =	libft.a

SRC =	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
	ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_strlcpy.c ft_toupper.c\
	ft_tolower.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c\
	ft_strdup.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

%o: %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	ar -rcs $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

# so:
# 	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC_BONUS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS_BONUS)
# 	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: clean fclean all re bonus rebonus
