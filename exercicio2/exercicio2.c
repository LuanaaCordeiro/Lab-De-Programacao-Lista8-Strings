#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_quebra_linha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {

        if (str[i] == '\n')
        {
            str[i] == '\0';
            break;
        }

        i++;
    }
}

int main()
{
    char palavra1[100];
    char palavra2[100];

    printf("Introduza a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    limpar_quebra_linha(palavra1);

    printf("Introduza a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    limpar_quebra_linha(palavra2);

    printf("A primeira palavra: %s", palavra1);
    printf("A segunda palavra: %s", palavra2);
    

    return 0;
}