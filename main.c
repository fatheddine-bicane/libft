#include "libft.h"
int main ()
{
	char a[10];
	char x[10];
	char s[] = "fatheddine";
	memcpy(a, s, 4);
	ft_memcpy(x, s, 4);
	printf("%s\n%s", a, x);
}