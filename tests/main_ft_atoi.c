#include <stdio.h>
#include <stdlib.h> // Para atoi
#include "../source_code/ft_atoi.c"
#include "../source_code/ft_isspace.c"
#include "../source_code/ft_isdigit.c"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s cadena\n", argv[0]);
        return 1;
    }

    const char *str = argv[1];
    int result_ft_atoi = ft_atoi(str);
    int result_atoi = atoi(str);

    printf("Cadena: \"%s\"\n", str);
    printf("  Resultado de ft_atoi: %d\n", result_ft_atoi);
    printf("  Resultado de atoi: %d\n", result_atoi);

    if (result_ft_atoi == result_atoi) {
        printf("  Los resultados son iguales.\n");
    } else {
        printf("  Los resultados son diferentes.\n");
    }

    return 0;
}
