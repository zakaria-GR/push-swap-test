NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.

SRC = parcer.c \
	into_stack_a.c \
	parcing/parse_args.c \
	parcing/is_number.c \
	parcing/has_duplicates.c \
	parcing/ft_atol.c \
	parcing/fill_numbers.c \
	parcing/error_exit.c \
	parcing/count_total_numbers.c \
	parcing/check_int_range.c \
	operations/sa.c \
	operations/sb.c \
	operations/pa.c \
	operations/pb.c \
	operations/ra.c \
	operations/rb.c \
	operations/rra.c \
	operations/rrb.c \
	libft/ft_substr.c \
	libft/ft_strlen.c \
	libft/ft_split.c \
	libft/ft_lstnew_bonus.c \
	libft/ft_lstadd_back_bonus.c \
	libft/ft_lstadd_front_bonus.c \
	libft/ft_lstclear_bonus.c \
	libft/ft_lstdelone_bonus.c \
	libft/ft_lstiter_bonus.c \
	libft/ft_lstlast_bonus.c \
	libft/ft_lstsize_bonus.c

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
