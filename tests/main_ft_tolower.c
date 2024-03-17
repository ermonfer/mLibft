#include <stdio.h>
#include <ctype.h>
#include "../source_code/ft_tolower.c"
#include "../source_code/ft_isupper.c"

int ft_tolower(int c);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s caracter\n", argv[0]);
        return 1;
    }

    int character = argv[1][0];

    // Convertir el caracter usando ft_tolower
    int result_ft = ft_tolower(character);

    // Comparar los resultados
    printf("Caracter después de ft_tolower: %c\n", result_ft);

    // Convertir el caracter usando tolower
    int result_std = tolower(character);

    // Comparar los resultados
    printf("Caracter después de tolower: %c\n", result_std);

    return 0;
}
