#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../source_code/ft_memset.c"

void *ft_memset(void *s, int c, size_t n);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("numero incorrecto de args");
		return 1;
    }

    char str[100];
    int character = atoi(argv[2]);

    // Copiar el argumento de línea de comandos a la cadena
    strcpy(str, argv[1]);

    // Realizar la operación usando ft_memset
    ft_memset(str, character, strlen(str));

    // Comparar los resultados
    printf("Cadena después de ft_memset: %s\n", str);

    // Restaurar str para usar memset
    strcpy(str, argv[1]);

    // Realizar la operación usando memset
    memset(str, character, strlen(str));

    // Comparar los resultados
    printf("Cadena después de memset: %s\n", str);

    return 0;
}
