#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../source_code/ft_memset.c"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("uso: %s caracter positivo", argv[0]);
		return 1;
    }

	char dest[100] = {0};
	char c = argv[1][0];
	int n = atoi(argv[2]);

	char *ft_result = ft_memset(dest, c, n);

	printf("Resultado de ft_memset:\n%s\n", ft_result);

	bzero(dest, 100);

	char *result = memset(dest, c, n);

	printf("Resultado de memset:\n%s\n", result);

	return 0;
}
