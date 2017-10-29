#ifndef FT_NM
# define FT_NM

# include "../libft/includes/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/mman.h>

typedef struct	s_env
{
	char	**args;
	int		size;
}				t_env;

typedef struct	s_map
{
	char	*name;
	void	*addr;
	int		size;
}				t_map;

void	default_arg(t_env *e);
void	ft_nm(char *file);

#endif
