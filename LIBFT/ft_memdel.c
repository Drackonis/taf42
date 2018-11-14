#include <stdio.h>
#include <stdlib.h>

void	ft_memdel(void **ptr)
{
	free(ptr);
	ptr = NULL;
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	void	**str1 = argv[1];
*	ft_memdel(str1);
*	printf("%s", str1);
*	return (0);
*}
*/
