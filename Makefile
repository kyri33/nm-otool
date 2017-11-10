NAME_NM = ft_nm

SRC_NM = nm/main.c nm/funcs.c nm/nm.c

FLAGS = clang -Wall -Werror -Wextra -g3 -I includes -o

all: $(NAME_NM)

ft_lib:
	make -C libft/ fclean && make -C libft/ all

$(NAME_NM): ft_lib $(SRC_NM)
	$(FLAGS) $(NAME_NM) libft/libft.a $(SRC_NM)

clean:
	make -C libf/ clean

fclean: clean
	make -C libf/ fclean
	rm -f $(NAME_NM)

re: fclean all
