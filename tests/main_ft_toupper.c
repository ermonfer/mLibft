#include <stdio.h>
#include <ctype.h>
#include "../source_code/ft_toupper.c"
#include "../source_code/ft_islower.c"

int ft_toupper(int c);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s caracter\n", argv[0]);
        return 1;
    }

    int character = argv[1][0];

    // Convertir el caracter usando ft_toupper
    int result_ft = ft_toupper(character);

    // Comparar los resultados
    printf("Caracter después de ft_toupper: %c\n", result_ft);

    // Convertir el caracter usando toupper
    int result_std = toupper(character);

    // Comparar los resultados
    printf("Caracter después de toupper: %c\n", result_std);

    return 0;
}

