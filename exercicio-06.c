#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar_vogais(char string[])
{
    int contador = 0;
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
                string[i] == 'o' || string[i] == 'u' ||
                string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
                string[i] == 'O' || string[i] == 'U')
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    int numero_vogais = contar_vogais(string);

    printf("Número de vogais: %d\n", numero_vogais);

    return 0;
}

