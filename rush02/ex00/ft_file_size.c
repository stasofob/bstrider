#include <fcntl.h>
#include "rush02.h"

int		ft_file_size(char *file)
{
	int		op;
    int		rd;
    char	c;
	int		size;

	size = 0;
	op = open(file, O_RDONLY);
	if (op == -1)
		return (0);
	while ((rd = read(op, &c, 1)))
		size++;
	close(op);
	return (size);
}
