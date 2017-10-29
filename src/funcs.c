#include "nm.h"

void	default_arg(t_env *e)
{
	e->args = (char**)malloc(sizeof(char *) * 2);
	e->args[0] = ft_strdup("a.out");
	e->args[1] = 0;
	e->size = 1;
}


