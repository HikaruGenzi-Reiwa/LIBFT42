#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;

	n2 = (long)n;
	if (n2 < 0)
	{
		n2 *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n2 >= 10)
		ft_putnbr_fd(n2 / 10, fd);
	ft_putchar_fd(n2 % 10 + '0', fd);
}