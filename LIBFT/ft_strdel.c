#include <stdio.h>
#include <stdlib.h>

void	ft_strdel(char **ptr)
{
	free(ptr);
	ptr = NULL;
}
