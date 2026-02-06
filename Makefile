NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.

SRC = main.c utils/into_stack_a.c check_is_sorted.c \
	parcing/parse_args.c parcing/is_number.c parcing/has_duplicates.c \
	parcing/ft_atol.c parcing/fill_numbers.c parcing/error_exit.c \
	parcing/count_total_numbers.c parcing/check_int_range.c \
	operations/swap.c operations/rotate.c operations/reverse_rotate.c \
	operations/push.c sorting/sort_2.c sorting/sort_3.c sorting/sort_5.c \
	utils/check_index.c libft/ft_substr.c libft/ft_strlen.c \
	libft/ft_split.c libft/ft_lstnew_bonus.c libft/ft_lstadd_back_bonus.c \
	libft/ft_lstsize_bonus.c utils/move_to_top.c utils/find_big.c \
	utils/find_min.c sorting/sort_big.c utils/index_the_stack.c \
	utils/get_chunk.c utils/push_back.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
