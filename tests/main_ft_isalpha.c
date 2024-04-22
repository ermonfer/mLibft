#include <stdio.h>
#include <ctype.h>
#include "../source_code/ft_isalpha.c"
#include "../source_code/ft_islower.c"
#include "../source_code/ft_isupper.c"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s caracter", argv[0]);
        return 1;
    }

    int c = argv[1][0];

    // Comparar los resultados
    printf("ft_isalpha: %d\n", ft_isalpha(c));
    printf("isalpha: %d\n", isalpha(c));

    return 0;
}
