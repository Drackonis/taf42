#include <stdio.h>
#include <stdlib.h>


void	*ft_memalloc(size_t n)
{
	void		*ptr;

	if (!(ptr = (void*)malloc(sizeof(void) * n)))
		return (NULL);
	else
		return (ptr);
}
/*
*int	main(int argc, char **argv)
*{
*	argc++;
*	char	*str1 = argv[1];
*	str1 = ft_memalloc(5);
*	printf("%s", str1);
*	return (0);
*}
*/
