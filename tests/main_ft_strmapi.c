#include "../source_code/ft_strmapi.c"
#include "../source_code/ft_strlen.c"
#include <stdio.h>
#include <ctype.h>

char my_func(unsigned int index, char c)
{
    if (index % 2 == 0)
        return toupper(c);
    else
        return tolower(c);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    char *input_string = argv[1];
    printf("Input string: %s\n", input_string);

    char *result = ft_strmapi(input_string, my_func);
    if (result)
    {
        printf("Mapped string: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    return 0;
}

