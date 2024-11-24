#include <stdio.h>
#include <stdlib.h>

float calcular_media(int array[], int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += array[i];
    }

    return (float)soma / tamanho;
}

int main()
{
    int tamanho;

    printf("Digite o número de elementos do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    float media = calcular_media(array, tamanho);

    printf("A média dos elementos do array é: %.2f\n", media);

    return 0;
}

