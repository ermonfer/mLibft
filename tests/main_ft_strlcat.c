#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../source_code/ft_strlcat.c"
#include "../source_code/ft_strlen.c"

size_t ft_strlcat(char *dest, const char *src, size_t size);

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s destino origen tamaño\n", argv[0]);
        return 1;
    }

    char dest[100];
    char src[100];
    size_t size = atoi(argv[3]);

    strcpy(dest, argv[1]);
    strcpy(src, argv[2]);

    size_t result_ft = ft_strlcat(dest, src, size);

    printf("Destino después de ft_strlcat: %s\n", dest);
    printf("Resultado de ft_strlcat: %zu\n", result_ft);

	bzero(dest, 100);
    strcpy(dest, argv[1]);

    size_t result_std = strlcat(dest, src, size);

    printf("Destino después de strlcat: %s\n", dest);
    printf("Resultado de strlcat: %zu\n", result_std);

    return 0;
}
