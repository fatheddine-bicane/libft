/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:20:25 by fbicane           #+#    #+#             */
/*   Updated: 2024/11/13 12:35:54 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
#include <fcntl.h>
#include <stdio.h>
int main ()
{
	char buffer[20];
	int fd = open("file.txt", O_CREAT | O_RDWR, 0666);
	if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
	ft_putchar_fd('h', fd);
	read(fd, buffer, 8);
	printf("%s", buffer);
}