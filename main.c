#include <stdio.h>
#include "soma.h"

int main() {
    int tamanhoArray;

    printf("Digite o tamanho da soma: ");
    scanf("%d", &tamanhoArray);

    int array[tamanhoArray];

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int soma = calcularSoma(array, tamanhoArray);

    printf("A soma dos elementos é: %d\n", soma);

    return;
}
