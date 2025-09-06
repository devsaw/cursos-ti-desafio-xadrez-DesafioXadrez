#include <stdio.h>

int main() {
   
    printf("Torre:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Bispo:\n");
    int casasMovidas = 0;
    while (casasMovidas < 5) {
        printf("Cima, Direita\n");
        casasMovidas++;
    }
    printf("\n");

    printf("Rainha:\n");
    int contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < 8);
    printf("\n");

    return 0;
}
