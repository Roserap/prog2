#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substituir_caractere(char* string, char antigo, char novo)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == antigo)
        {
            string[i] = novo;
        }
    }
}

int main()
{
    char string[100];
    char antigo, novo;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &antigo);
    printf("Digite o novo caractere: ");
    scanf(" %c", &novo);

    substituir_caractere(string, antigo, novo);

    printf("String após substituição: %s\n", string);

    return 0;
}

