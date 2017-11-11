#include "nm.h"
#include <ctype.h>

int		get_file_size(int fd)
{
	struct stat	buf;

	fstat(fd, &buf);
	return (buf.st_size);
}

void	ft_nm(char *file)
{
	int		fd;
	t_map	*map;
	void	*test;

	if ((fd = open(file, O_RDWR)) <= 0)
		return (perror("Error opening file"));
	map = (t_map*)malloc(sizeof(t_map));
	map->name = file;
	map->size = get_file_size(fd);
	test = mmap(0, map->size, PROT_READ, MAP_PRIVATE, fd, 0);
	for (int i = 0; i < 50; i++)
		printf("%02x ", ((uint8_t*)test)[i]);
	printf("\n");
}
