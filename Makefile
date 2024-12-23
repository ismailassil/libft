# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iassil <iassil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 13:40:42 by iassil            #+#    #+#              #
#    Updated: 2024/11/11 20:11:30 by iassil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for LIBFT PROJECT

# Compilation
CC = cc
CC_FLAGS = -Wall -Wextra -Werror

# Archive
AR = ar
AR_FLAG = -rcs

# Source Files
SRCF = ft_atoi.c			ft_bzero.c			ft_calloc.c		\
		ft_isalnum.c		ft_isalpha.c		ft_isascii.c	\
		ft_isdigit.c		ft_isprint.c		ft_memchr.c		\
		ft_memcmp.c			ft_memcpy.c			ft_memmove.c	\
		ft_memset.c			ft_strchr.c			ft_strdup.c		\
		ft_strjoin.c		ft_strlcat.c		ft_strlcpy.c	\
		ft_strlen.c			ft_strncmp.c		ft_strnstr.c	\
		ft_strrchr.c		ft_strtrim.c		ft_substr.c		\
		ft_tolower.c		ft_toupper.c		ft_itoa.c		\
		ft_strmapi.c		ft_striteri.c		ft_putchar_fd.c	\
		ft_putstr_fd.c		ft_putendl_fd.c		ft_putnbr_fd.c	\
		ft_split.c

# Bonus Files
SRCB =	ft_lstnew_bonus.c		ft_lstadd_front_bonus.c		ft_lstsize_bonus.c		\
		ft_lstlast_bonus.c		ft_lstadd_back_bonus.c		ft_lstdelone_bonus.c	\
		ft_lstclear_bonus.c		ft_lstiter_bonus.c			ft_lstmap_bonus.c		\
		

OBJECTF_FILES	= $(SRCF:.c=.o)
OBJECTB_FILES	= $(SRCB:.c=.o)
ALL_OBJ			= $(OBJECTB_FILES) $(OBJECTF_FILES)
LIBFT_H = libft.h

# Output File
NAME = libft.a

all: $(NAME)

%.o: %.c $(LIBFT_H)
	$(CC) $(CC_FLAGS) -c -o $@ $<

$(NAME): $(OBJECTF_FILES)
	$(AR) $(AR_FLAG) $@ $^

bonus: $(ALL_OBJ)
	$(AR) $(AR_FLAG) $(NAME) $^
	
clean:
	rm -f $(OBJECTF_FILES) $(OBJECTB_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
