/*-------------------------------------------------------------------------------*/
/*  FATEC - São Caetano do Sul                      Estrutura de Dados           */
/*                         Id da Atividade: S1-B1-2                              */
/*                                                                               */
/*  Objetivo: << Diagrama com Bubble Sort >>                                     */
/*                                                                               */
/*  Autor: Henry Ferreira Quiles                                                 */
/*  Data: 06/05/2025                                                             */
/*-------------------------------------------------------------------------------*/



#include <stdio.h>
#include <stdbool.h>

#define ORDEM_CRESCENTE 1
#define ORDEM_DECRESCENTE 0

// Função que realiza a troca de dois elementos
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função de Bubble Sort otimizada com critério de ordenação
void bubbleSort(int arr[], int length, int ordem) {
    bool swapped;

    for (int i = 0; i < length - 1; i++) {
        swapped = false;

        for (int j = 1; j < length - i; j++) {
            bool condicaoTroca = (ordem == ORDEM_CRESCENTE) ? (arr[j] < arr[j - 1]) : (arr[j] > arr[j - 1]);

            if (condicaoTroca) {
                trocar(&arr[j], &arr[j - 1]);
                swapped = true;
            }
        }

        // Se nenhuma troca foi feita, array já está ordenado
        if (!swapped) {
            break;
        }
    }
}

// Função para imprimir o array
void imprimirArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    imprimirArray(arr, length);

    // Ordenação crescente
    bubbleSort(arr, length, ORDEM_CRESCENTE);
    printf("Array ordenado (crescente):\n");
    imprimirArray(arr, length);

    // Reordenar para demonstrar ordenação decrescente
    int arr2[] = {5, 2, 9, 1, 5, 6};
    bubbleSort(arr2, length, ORDEM_DECRESCENTE);
    printf("Array ordenado (decrescente):\n");
    imprimirArray(arr2, length);

    return 0;
}
