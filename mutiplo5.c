#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número múltiplo de 5: ");
        scanf("%d", &numero);

        if (numero % 5 != 0) {
            printf("O número não é múltiplo de 5. Tente novamente.\n");
        }
    } while (numero % 5 != 0);

    printf("Tchau!\n");

    return 0;
}

/* 
1º inclui a biblioteca stdio.h
2º iniciar a main como int () {}
3º declara o numero como inteiro (int numero)
4º do e um if depois while ou seja faça se enquanto..
5º printa tchau caso o if seja alcaçado..

*/
