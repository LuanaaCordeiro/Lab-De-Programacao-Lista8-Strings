#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int eh_palindromo(const char *str)
{
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim)
    {

        if (str[inicio] == ' ')
        {
            inicio++;
        }
        else if (str[fim] == ' ')
        {
            fim--;
        }
        else
        {
            if (tolower(str[inicio]) != tolower(str[fim]))
            {
                return 0;
            }

            inicio++;
            fim--;
        }
    }

    return 1;
}

int main()
{
    char texto[200];

    printf("Digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);


    texto[strcspn(texto, "\n")] = '\0';

    if (eh_palindromo(texto) == 1)
    {
        printf("O texto eh um palindromo.\n");
    }
    else
    {
        printf("O texto nao eh um palindromo.\n");
    }

    return 0;
}
