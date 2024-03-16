#include <stdio.h>
#include <string.h>
#include "../source_code/ft_memmove.c"

void *ft_memmove(void *dest, const void *src, size_t n);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s destino origen\n", argv[0]);
        return 1;
    }

    char dest[100];
    char src[100];

    // Copiar los argumentos de línea de comandos a los arrays
    strcpy(dest, argv[1]);
    strcpy(src, argv[2]);

    // Realizar la copia usando ft_memmove
    ft_memmove(dest, src, strlen(src) + 1);

    // Comparar los resultados
    printf("Destino después de ft_memmove: %s\n", dest);

    // Restaurar dest para usar memmove
    strcpy(dest, argv[1]);

    // Realizar la copia usando memmove
    memmove(dest, src, strlen(src) + 1);

    // Comparar los resultados
    printf("Destino después de memmove: %s\n", dest);

    return 0;
}
