#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter_string(char string[])
{
    int inicio = 0;
    int fim = strlen(string) - 1;
    char temp;

    while (inicio < fim)
    {
        temp = string[inicio];
        string[inicio] = string[fim];
        string[fim] = temp;

        inicio++;
        fim--;
    }
}

int main()
{
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0;

    inverter_string(string);

    printf("String invertida: %s\n", string);

    return 0;
}
