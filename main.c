
#include <stdio.h>

int main() {
    int numeros[20];
    int i;
    int somaMultiplos3 = 0;
    int somaPares = 0;
    int quantidadePares = 0;
    int positivos = 0;
    int negativos = 0;
    int maior, menor;
    float mediaPares;

    // Leitura dos 20 numeros
    for (i = 0; i < 20; i++) {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa maior e menor
    maior = numeros[0];
    menor = numeros[0];

    // Percorre o vetor e realiza os calculos
    for (i = 0; i < 20; i++) {

        // Soma os multiplos de 3
        if (numeros[i] % 3 == 0) {
            somaMultiplos3 += numeros[i];
        }

        // Soma e conta os numeros pares
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            quantidadePares++;
        }

        // Conta positivos e negativos
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }

        // Encontra o maior e o menor valor
        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Apresenta os resultados
    printf("\n===== RESULTADOS =====\n");
    printf("Soma dos multiplos de 3: %d\n", somaMultiplos3);

    // Evita divisao por zero
    if (quantidadePares > 0) {
        mediaPares = (float)somaPares / quantidadePares;
        printf("Media dos numeros pares: %.2f\n", mediaPares);
    } else {
        printf("Nao existem numeros pares no vetor.\n");
    }

    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    // Exibe todos os elementos do vetor
    printf("\nElementos do vetor:\n");

    for (i = 0; i < 20; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}