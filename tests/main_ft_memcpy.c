#include <stdio.h>
#include <string.h>
#include "../source_code/ft_memcpy.c" // Ajusta la ruta según sea necesario

// void *ft_memcpy(void *dest, const void *src, size_t n);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("numero incorrecto de argumentos\n");
        return 1;
    }

    char dest[100];
    char src[100];

    // Copiar los argumentos de línea de comandos a los arrays
    strcpy(dest, argv[1]);
    strcpy(src, argv[2]);

    // Realizar la copia usando ft_memcpy
    ft_memcpy(dst, src, strlen(src) + 1);

    // Comparar los resultados
    printf("Destino después de ft_memcpy: %s\n", dest);

    // Restaurar dest para usar memcpy
    strcpy(dest, argv[1]);

    // Realizar la copia usando memcpy
    memcpy(dest, src, strlen(src) + 1);

    // Comparar los resultados
    printf("Destino después de memcpy: %s\n", dest);

    return 0;
}

