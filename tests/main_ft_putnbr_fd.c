#include "../source_code/ft_putnbr_fd.c"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("uso: ./main_ft_putnbr <entero> <descriptor de archivo>");
		return 1;
	}

	int		n = atoi(argv[1]);
	int		fd = atoi(argv[2]);

	ft_putnbr_fd(n, fd);
	return 0;
}
