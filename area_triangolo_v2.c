#include <stdio.h>

int main(){
    float b, h, area;
    printf("Inserisci la base: \n");
    scanf("%f", &b);
    printf("Inserisci l'altezza: \n");
    scanf("%f", &h);
    area = (b*h)/2.0;
    printf("Area triangolo: %f\n", area);
    return 0;
}