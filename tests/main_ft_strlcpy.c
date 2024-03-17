#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../source_code/ft_strlcpy.c"

size_t ft_strlcpy(char *dest, const char *src, size_t size);

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s destino origen tamaño\n", argv[0]);
        return 1;
    }

    char dest[100];
    char src[100];
    size_t size = atoi(argv[3]);

    // Copiar los argumentos de línea de comandos a los arrays
    strcpy(dest, argv[1]);
    strcpy(src, argv[2]);

    // Realizar la copia usando ft_strlcpy
    size_t result_ft = ft_strlcpy(dest, src, size);

    // Comparar los resultados
    printf("Destino después de ft_strlcpy: %s\n", dest);
    printf("Resultado de ft_strlcpy: %zu\n", result_ft);

    // Restaurar dest para usar strlcpy
    strcpy(dest, argv[1]);

    // Realizar la copia usando strlcpy
    size_t result_std = strlcpy(dest, src, size);

    // Comparar los resultados
    printf("Destino después de strlcpy: %s\n", dest);
    printf("Resultado de strlcpy: %zu\n", result_std);

    return 0;
}
