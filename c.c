#include "libft.h"

void	capitalize_even_index(unsigned int i, char *p)
{
	if (i >= 0 && (*p >= 'a' && *p <= 'z'))
		(*p -= 32);
}

int main()
{
    char s[] = "hello";
    ft_striteri(s, capitalize_even_index);
    printf("%s\n", s);  // Expected output: "HeLlO"
    return 0;
}
