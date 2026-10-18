#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void analisar_texto(const char *texto, int *vogais, int *consoantes, int *espacos)
{
    int i = 0;
    char letra;

    *vogais = 0;
    *consoantes = 0;
    *espacos = 0;

    while (texto[i] != '\0')
    {
        letra = tolower(texto[i]);

        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u')
        {
            (*vogais)++;
        }
        else if (letra >= 'a' && letra <= 'z')
        {
            (*consoantes)++;
        }
        else if (letra == ' ')
        {
            (*espacos)++;
        }

        i++;
    }
}

int main()
{
    char texto[200];
    int vogais; 
    int consoantes; 
    int espacos;

    printf("Digite um paragrafo de ate 200 caracteres: ");

    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    analisar_texto(texto, &vogais, &consoantes, &espacos);

    printf("\nQuantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
    printf("Quantidade de espacos: %d\n", espacos);

    return 0;
}