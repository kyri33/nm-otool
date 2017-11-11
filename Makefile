NAME_NM = ft_nm

SRC_NM = nm/main.c nm/funcs.c nm/nm.c

FLAGS = gcc -m64 -Wall -Werror -Wextra -g -I includes -o

all: $(NAME_NM)

ft_lib:
	make -C libft/ fclean && make -C libft/ all

$(NAME_NM): ft_lib $(SRC_NM)
	$(FLAGS) $(NAME_NM) libft/libft.a $(SRC_NM)

clean:
	make -C libft/ clean

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME_NM)

re: fclean all
