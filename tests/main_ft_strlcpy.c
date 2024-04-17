#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../source_code/ft_strlcpy.c"

size_t ft_strlcpy(char *dest, const char *src, size_t size);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s src size\n", argv[0]);
        return 1;
    }

    char dest[100];
    size_t size = atoi(argv[2]);

    size_t result_ft = ft_strlcpy(dest, argv[1], size);

    printf("Destino después de ft_strlcpy: %s\n", dest);
    printf("Resultado de ft_strlcpy: %zu\n", result_ft);

	bzero(dest, 100);

    size_t result_std = strlcpy(dest, argv[1], size);

    printf("Destino después de strlcpy: %s\n", dest);
    printf("Resultado de strlcpy: %zu\n", result_std);

    return 0;
}
