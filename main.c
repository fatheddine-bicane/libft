#include "libft.h"
int main ()
{
	char *a = memchr("fatheddine", 0, 32);
	char *b = ft_memchr("fatheddine", 0, 32);
	printf("%s\n%s", a, b);
}