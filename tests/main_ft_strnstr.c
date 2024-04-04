#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../source_code/ft_strnstr.c"
#include "../source_code/ft_strncmp.c"
#include "../source_code/ft_strlen.c"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s haystack needle len\n", argv[0]);
        return 1;
    }

    const char *haystack = argv[1];
    const char *needle = argv[2];
    size_t len = (size_t)atoi(argv[3]);

    char *result_ft_strnstr = ft_strnstr(haystack, needle, len);
    char *result_strnstr = strnstr(haystack, needle, len);

    printf("Haystack: \"%s\", Needle: \"%s\", Len: %zu\n", haystack, needle, len);
    printf("  Resultado de ft_strnstr: \"%s\"\n", result_ft_strnstr);
    printf("  Resultado de strnstr: \"%s\"\n", result_strnstr);

    if ((result_ft_strnstr == NULL && result_strnstr == NULL) ||
        (result_ft_strnstr != NULL && result_strnstr != NULL && strcmp(result_ft_strnstr, result_strnstr) == 0)) {
        printf("  Los resultados son iguales.\n");
    } else {
        printf("  Los resultados son diferentes.\n");
    }

    return 0;
}
