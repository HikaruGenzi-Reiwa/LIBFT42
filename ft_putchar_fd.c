#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <fcntl.h>
// int main()
// {
//     int fd = open("test.txt", O_RDWR);
//     fd = 1;

//     for (char c = 'A'; c <= 'Z'; ++c) {
//         ft_putchar_fd(c, fd);
//     }

//     ft_putchar_fd('\n', fd);

//     return (0);
// }

// 0 入力　1 標準出力　2 標準出力エラー　１と２の違いは口から出るか黄門から出るか。