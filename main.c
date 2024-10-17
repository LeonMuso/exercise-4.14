#include <stdio.h>

int main(void) {
    float temperatura;
    int Tcaldo, Tfredda, giorni;
    for (giorni = 0; giorni < 10; giorni++) {
        printf("Temperatura: ");
        scanf("%f", &temperatura);
        if (temperatura < 5) {
            Tfredda++;
        }else if (temperatura > 5) {
            Tcaldo++;
        }else {
            printf("non ci sono stati cambiamenti \n");
        }
    }
    printf("diminuita la temperatura: %d\n", Tfredda);
    printf("aumento di temperatura: %d\n", Tcaldo);
}