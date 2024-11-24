#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int array[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
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

    bubble_sort(array, tamanho);

    printf("Array ordenado em ordem crescente:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

