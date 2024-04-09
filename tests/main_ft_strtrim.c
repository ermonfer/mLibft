#include "../source_code/ft_strtrim.c"
#include "../source_code/ft_strchr.c"
#include "../source_code/ft_strdup.c"
#include "../source_code/ft_substr.c"
#include "../source_code/ft_memcpy.c"
#include "../source_code/ft_strlen.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s cadena conjunto\n", argv[0]);
        return 1;
    }

    char *cadena = argv[1];
    char *conjunto = argv[2];

    char *resultado = ft_strtrim(cadena, conjunto);

    printf("Cadena original: \"%s\"\n", cadena);
    printf("Conjunto a eliminar: \"%s\"\n", conjunto);
    printf("Cadena resultante: \"%s\"\n", resultado);

    free(resultado);

    return 0;
}
