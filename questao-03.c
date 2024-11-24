#include <stdio.h>
#include <stdlib.h>


int soma_array(int array[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += array[i];
    }
    return soma;
}

int main()
{
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os %d elementos do array:\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int resultado = soma_array(array, tamanho);
    printf("A soma dos elementos do array é: %d\n", resultado);

    return 0;
}

