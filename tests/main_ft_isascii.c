#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>
#include "../source_code/ft_isascii.c" 

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s argumento\n", argv[0]);
        return 1;
    }

    int c = atoi(argv[1]);

    // Comparar los resultados
    printf("ft_isascii: %d\n", ft_isascii(c));
    printf("isascii: %d\n", isascii(c));

    return 0;
}

