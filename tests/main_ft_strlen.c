#include <stdio.h>
#include <string.h>
#include "../source_code/ft_strlen.c"

size_t ft_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s cadena\n", argv[0]);
        return 1;
    }

    char *str = argv[1];

    // Calcular la longitud usando ft_strlen
    size_t result_ft = ft_strlen(str);

    // Comparar los resultados
    printf("Longitud usando ft_strlen: %zu\n", result_ft);

    // Calcular la longitud usando strlen
    size_t result_std = strlen(str);

    // Comparar los resultados
    printf("Longitud usando strlen: %zu\n", result_std);

    return 0;
}
