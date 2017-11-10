#include "nm.h"

void	fetch_args(int argc, char **argv, t_env *e)
{
	int	i;

	i = 0;
	e->size = 0;
	if (argc == 1)
		return default_arg(e);
	e->args = (char**)malloc(sizeof(char *) * argc);
	while (i < argc - 1)
	{
		e->args[i] = ft_strdup(argv[i + 1]);
		i++;
		e->size++;
	}
	e->args[i] = 0;
}

int	main(int argc, char **argv)
{
	t_env	e;
	int		i;

	i = 0;
	fetch_args(argc, argv, &e);
	while (e.args[i])
	{
		ft_nm(e.args[i]);
		i++;
	}
}
