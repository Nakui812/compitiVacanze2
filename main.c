#include <stdio.h>

int main(void) {
    int array[20];
    int nVoti;
    for (int i = 0; i < 20; i++) {

    }
    float voto = 0;
    float Max = 0;
    float sommaVoti = 0;
    float media;
    int crediti=0;

    for (int i = 0; i < 20; i++) {
        printf("inserisci un voto : \n");
        scanf("%f", &voto);
        while (voto < 2 || voto > 10) {
            printf("inserisci un voto valido : \n");
            scanf("%f", &voto);
        }
        sommaVoti += voto;
        if (Max < voto) {
            Max = voto;
        }
        array[i] = voto;
    }
    for (int i = 0; i < 20; i++) {
        printf("Voto %d: %d\n", i + 1, array[i]);
    }
    media = sommaVoti / 20;
    printf("il voto piu grande che hai preso è stato : %f \n", Max);
    printf("la media dei voti è: %.2f \n,media");

}
